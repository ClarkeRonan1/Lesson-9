/*
 * Name: Vector pairing challenge
 * Date: 27/09/18
 * Description: This program prompts user to enter
 * integers into a vector. The program will then
 * return all the possible pairs and then multiply
 * each element by the element in it's pair
 * Then sum the total
 */
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int result {};
    int numOfIntegers {};
    
    cout << "Enter the number of integers you want: ";
    cin >> numOfIntegers;
    //Now we have the size of the vector
    
    vector <int> vec {numOfIntegers};
    //Make a vector of that size!
    cout << "Enter " << numOfIntegers << " separated by spaces: ";
    for (int i {1}; i <= numOfIntegers; i++)
    {
        int unpairedValues {};
        cout << "Enter value " << i << ": ";
        cin >> unpairedValues;
        vec.push_back(unpairedValues);
    }
    int product {};
    cout << vec.size();
    //Now it's time to pair all of the values
    for (int num1 {1}; num1 <= numOfIntegers; num1++)
    {
        //This means outer loop has iterated once
        for (int num2 {1}; num2 <= numOfIntegers; num2++)
        {
            if (vec.at(num1) < vec.at(num2) && vec.at(num1) != vec.at(num2))
            {
                product += vec.at(num1) * vec.at(num2);
                cout << vec.at(num1) << " * " << vec.at(num2) << " = " << product << endl;
                //cout << vec.size() << endl;
                
            }
            /*
            if (vec.at(num1) == vec.at(num2))
            {
                //This means this should not be displayed
                cout << "Duplicate" << endl;
            }
            //Filter out the pairs
            if (vec.at(num1) > vec.at(num2))
            {
                cout << "Already paired" << endl;
            }

            //else if (vec.at)
                //cout << vec.at(num1) << " "<< vec.at(num2) << endl;
                 */
        }
    }
    
    //OR
    /*
     * int result{};
    
    for (size_t i=0; i< vec.size(); ++i)
       for (size_t j=i+1; j< vec.size(); ++j) 
            result = result + vec.at(i) * vec.at(j);
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    return result;
    */
    
    return 0;
}