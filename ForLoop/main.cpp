#include <iostream>
#include <vector>
using namespace std;

int main()
{
    for (int i{1}; i<=10; i++)
    {
        cout << i << endl;
    }
    
    for (int j{1}; j<=10; j+=2)
    {
        cout << j << endl;
    }
    for (int k{10}; k > 0; k--)
    
        cout << k << endl;
    cout << "Blastoff!" << endl;
    
    //print 10 to 100
    //in 10s
    for (int i{10}; i<=100; i+= 10)
    {
        if(i % 15 == 0)
        {
            //display 30, 60, 90
                    cout << i << endl;
        }
    }
    
    for (int i{1}, j {5}; i <= 5; i++, j++)
    {
        //Using the comma operator
        cout << i << " + " << j << " = " << (i+j) << endl;
    }
    
    //printing out 1 to 100 in a table format
//    for (int i{1}; i <= 100; i++)
//    {
//        cout << i;
//        //every 10th i, output new line
//        if (i % 10 == 0)
//        {
//            cout << endl;
//        }
//        else 
//            cout << " ";
//    }

        // OR
        
    for (int i{1}; i <= 100; i++)
    {
        // print i, and if i % 10 == 0 print new line.
        //else print space.
        cout << i << ((i % 10 == 0) ? "\n": " ");

    }
    
    
    //Looping through vectors
    vector <int> nums {10,20,30,40,50};
    
    for (int i {0}; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
    }
    //if you get a warning about signed and unsigned
    //This means that the .size only returns unsigned ints
    //Because the size cannot be a negative value
    //And so by having a signed int i (can contain negative values)
    //There could be an error.
    //So you can speicfy int i to unsigned i{0}; instead

    return 0;
}