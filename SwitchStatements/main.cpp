#include <iostream>
using namespace std;
int main()
{
    //switch statements can have default at end
    
    //Code will continue to be executed until
    //you hit a break statement.
    //This means that even if case 1 has been true,
    //case 2,3 and 4 will be executed until a break
    //is found
    
    //Better to use break statement in each case
    char letterGrade {};
    
    cout << "Enter the letter grade you expect on the exam: ";
    cin >> letterGrade;
    
    switch (letterGrade)
    {
        case 'a':
        case 'A': 
            cout << "You need a 90 or above" << endl;
            break;
        case 'b':
        case 'B':
            cout << "You need to 80-89" << endl;
            break;
        case 'c':
        case 'C':
            cout << "You need 70-79" << endl;
            break;
        case 'd':
        case 'D':
            cout << "You should strive for a better grade" << endl;
            break;
        case 'f':
        case 'F':
        {
            char confirm{};
            cout << "Are you sure (Y/N)?";
            cin >> confirm;
            if(confirm == 'y' || confirm == 'Y')
                cout << "Okay, just confirming" << endl;
            else if (confirm == 'n' || confirm == 'N')
                cout << "Even better!" << endl;
                
            else 
                cout << "Invalid choice" << endl;
            break;

        }
        default:
            cout << "Sorry, not a valid grade" << endl;
    }
    
    return 0;
}