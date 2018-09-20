// Section 9
// Grades
#include <iostream>
using namespace std;
int main()
{
    //In c++, an else statement belongs
    //to the closest if statement to it
    
    //variables
    int score {};
    cout << "Enter your score on the exam (0-100):";
    cin >> score;
    char letterGrade {};
    
    if (score >= 0 && score <= 100)
    {
        //This is true
        //cout << "This is true" << endl;
        if (score > 90)
        {
            letterGrade = 'A';
        }
        else if (score >= 80)
        {
            letterGrade = 'B';
        }
        else if (score >= 70)
        {
            letterGrade = 'C';
        }
        else if (score >= 60)
        {
            letterGrade = 'D';
        }
        else
        {
            letterGrade = 'F';
        }
        cout << "Your grade is :" << letterGrade << endl;
        if (letterGrade == 'F')
        {
            cout << "Sorry, you must repeat this class" << endl;
            
        }
        else 
        {
            cout << "Congrats!";
        }
    }
    else
    {
        cout << "Sorry, "<< score << " is not in range" << endl;
    }
    cout << endl;
    return 0;
}