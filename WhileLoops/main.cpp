#include <iostream>

using namespace std;
int main()
{
    //KISS principle
    //Keep it simple stupid
    
    int num {};
    cout << "Enter a positive integer - start the countdown :";
    cin >> num;
    
    while (num > 0)
    {
        cout << num << endl;
        --num;
        //Post decrement and pre decrement
        //mean same thing here
    }
    cout << "Blastoff!" << endl;
    
    
    int num1 {};
    cout << "Enter a positive integer to count up to:";
    cin >> num1;
    
    int i {1}; //1 ++ 2 ++ 3 ++ 4
    while (num1 >= i)
    {
        cout << i << endl;
        i++;
    }
    
    int number {};
    
    cout << "Enter an integer less than 100:";
    cin  >> number;
    
    while (number >= 100)   //!(number
    {
        cout << "Enter an integer less than 100: ";
        cin >> number;
    }
    cout << "Thanks" << endl;
    
    //using Boolean flag
    //this is better than previous statements
    //This doesn't repeat code! 
    bool done {false};
    //Explicitly set to false
    int numberBool {};
    
    while (!done)   //while false
    {
        cout << "Enter an integer between 1 and 5: ";
        cin >> numberBool;
        if (numberBool <= 1 || numberBool >= 5)
        {
            cout << "Out of range, try again" << endl;
        }
        else
        {
            cout << "Thanks!" << endl;
            done = true;
        }
    }
    
    return 0;
}