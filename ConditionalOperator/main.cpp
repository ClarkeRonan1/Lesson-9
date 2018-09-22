#include <iostream>
//conditional operator

using namespace std;
int main()
{
    //It is like an if-else statement
    //on a single line
    
    int num1 {};
    cout << "Enter an integer: ";
    cin >> num1;
    
    if (num1 % 2 == 0)
        cout << num1 << "is even" << endl;
    else
        cout << num1 << "is odd" << endl;
        
    cout << num1 << " is " << ((num1 % 2 == 0) ? "even":"odd") << endl;
                                //here onwards gets outputted depending
              

    int num 2 {}, num3 {};
    
    cout << "Enter two integers separated by a space;";
    cin >> num2 >> num3;
    
    if (num2 != num2)
    {
        cout << "Largest: " << ((num2 > num3) ? num2 : num3) << endl;
        cout << "Smallest: " << ((num2 < num3) ? num2 : num3) << endl;
        
    }
    else
    {
        cout << "The numbers are the same" << endl;
    }
    return 0;
}