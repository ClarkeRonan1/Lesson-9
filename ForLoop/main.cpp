#include <iostream>
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
    {
        cout << k << endl;
        cout << "Blastoff!" << endl;
    }
    

    return 0;
}