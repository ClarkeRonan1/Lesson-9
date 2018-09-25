#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main()
{
    int scores[] {10,20,30};
    
    for (int score: scores)
    {
        cout << score << endl;
    }
    //for (auto score: scores
    //This auto will deduce the type of collection
    
    vector <double> temperatures {87.9, 77.9, 80.0, 72.5};
    double averageTemp {};
    double total {};
    
    //loop through the vector
    for (auto temp: temperatures)
    {
        total += temp;
    }
    if (temperatures.size() != 0)
    {
        averageTemp = total / temperatures.size();
        //This is double division
    }
    cout << fixed << setprecision(1);
    //rounding to the 1st decimal place
    cout << "Average temperature is " << averageTemp << endl;
    
    //Initialiser list
    for (auto val: {1, 2, 3, 4, 5})
        cout << val << endl;
        
//    C style string
//    for (auto c: "This is a test")
//        if (c != ' ')
//            this gets rid of all spaces
//            cout << c;

    for (auto c: "This is a test")
    {
        if (c == ' ')
            //If there is a space
            //replace it with a tab
            cout << "\t";
        else 
            cout << c;
    }
            
    cout << endl;
    return 0;
}