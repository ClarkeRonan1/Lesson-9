#include <iostream>
using namespace std;

int main()
{
    // Program using 4 different if statements
    int num0 {};
    
    //constant boundaries
    const int min {10};
    const int max {100};
    
    cout << "Enter a number between " << min << " and " << max << endl;
    cin >> num0;
    
    if(num0 >= min)
    {
        cout << "\n=========== If statement 1=========" << endl;
        cout << num0 << " is greater than or equal to " << min << endl;
        
        int diff {num0 - min};
        //This is a variable only used in this block
        cout << num0 << " is " << diff << " greater than " << min << endl;
    }
    
    if (num0 <= max)
    {
        cout << "\n=========== If statement 2=========" << endl;
        cout << num0 << " is less than or equal to " << max << endl;
        
        int diff {max - num0};
        //This is a variable only used in this block
        cout << num0 << " is " << diff << " greater than " << max << endl;
    }
    
    //Check whether the number is within the bounds
    if (num0 >= min && num0 <= max)
    {
        cout << "\n=========== If statement 3=========" << endl;
        cout << num0 << " is in range " << endl;
        cout << "This means statements 1 and 2 must also display!! " << endl;

    }
    
    //Check if the number is on the boundary
    if (num0 == min || num0 == max)
    {
        cout << "\n=========== If statement 4=========" << endl;
        cout << num0 << " is right on a boundary" << endl;
        cout << "This means all if statements are displayed" << endl;
    }
    cout << endl;
    return 0;
}