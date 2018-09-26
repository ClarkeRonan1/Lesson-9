//Section 9
//Nested loops - Multiplication table

#include <iostream>

using namespace std;
int main()
{
    
    for (int num1 {1}; num1 <= 10; num1++)
    {//For every one loop of the outer loop,
        //The inner loop must loop 10 times
        //before the outer loop iterates again
        for (int num2 {1}; num2 <= 10; num2++)
        {
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            //This prints the num1 * num2
        }
        cout << "-----------------" << endl;
    }
    cout << endl;
    return 0;
}