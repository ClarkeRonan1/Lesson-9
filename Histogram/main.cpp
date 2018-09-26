// Section 9
// Nested loops - Histogram
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int numItems {};
    cout << "How many data items do you have?";
    cin >> numItems;
    
    //Ask them 5 times to get this data
    //Array is not good idea, so use vector
    
    vector <int> data {};
    
    //Loop from 1 to the number they enter
    for (int i {1}; i <= numItems; i++)
    {
        int dataItem {};
        cout << "Enter data item " << i << ": ";
        cin >> dataItem;
        data.push_back(dataItem);
    }
    
    cout << "\nDisplaying Histogram" << endl;
    
    //Display the data
    //So depending on the val within data,
    //It will display this many -s
    for (auto val : data)
    {
        for (int i {1}; i <= val; i++)
        {
            if (i % 5 == 0)
            {
                cout << "*";
            }
            else
                cout << "-";
        }
        cout << endl;
        //Looping through the collection
        
    }
    cout << endl;
    return 0;
}