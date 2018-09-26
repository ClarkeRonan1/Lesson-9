//Section 9
//Do-while
//Simple Menu example
#include <iostream>

using namespace std;
int main()
{
    //This is a post test loop
    //It will be carried out at least once
    
    //Consider do-while loop in situations
    //where you must execute the loop atleast
    //once
    
    //You need a semicolon at the end of it
    
    //Test the do-while before you fill it out!
    char selection {};
    do 
    {
        cout << "\n===================" << endl;
        cout << "1. Do this:" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else" << endl;
        cout << "Q. Quit" << endl;
        cout << "\nEnter your selection: ";
        cin >> selection;
        switch (selection)
        {
            case '1':
            {
                cout << "You chose 1 - doing this" << endl;
                break;
            }
            case '2':
            {
                cout << "You chose 2 - doing that" << endl;
                break;
            }
            case '3':
            {
                cout << "You chose 3 - doing something else" << endl;
                break;
                
            }
            case 'q':
            {
                cout << "Goodbye" << endl;
                break;
            }
            case 'Q':
            {
                cout << "Goodbye" << endl;
                break;
            }
            default:
            {
                cout << "Unkown option" << endl;
                break;
            }
            
        }
         
         //if (selection == '1')
        
    } while (selection != 'q' && selection != 'Q');
    return 0;
}