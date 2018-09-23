#include <iostream>
#include <vector>
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
    }
    cout << "Average temperature is " << averageTemp << endl;
    cout << endl;
    return 0;
}