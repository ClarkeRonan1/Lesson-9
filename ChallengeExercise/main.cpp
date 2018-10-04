#include <iostream>
#include <vector>

using namespace std;
/*
 * Using collection (list) of integers and allowing
 * user to select options from a menu to 
 * perform operations on the list.
 * 
 * P - print numbers
 * A - Add numbers
 * M - Display mena of the numbers
 * S - Display the smallest number
 * L - Display the largest number
 * Q - Quit
 * 
 * Accepts both upper and lowercase
 * If illegal choice is made, display
 * "Unknown selction made, please try again"
 * Show the menu again
 */
 
int main()
{
    char selection {};
    vector <int> collection {10,40,32,45,1,5,7};
    do
    {
        cout << "====================================" << endl;
        cout << "P - print numbers in collection" << endl;
        cout << "A - Add a number to collection" << endl;
        cout << "M - Display the mean of collection" << endl;
        cout << "S - Display the smallest in the collection" << endl;
        cout << "L - Display the largest in the collection" << endl;
        cout << "Q - Quit program" << endl;
        cin >> selection;
        //switch statement
        switch (selection)
        {
            case 'P':
                for (size_t i {0}; i < collection.size(); i++)
                {
                    cout << collection[i] << endl;
                }
                break;
            case 'p':
            {
                for (size_t i {0}; i < collection.size(); i++)
                {
                    cout << collection[i] << endl;
                }
                break;
                
            }
            case 'A':
            {
                int addNum {};
                cout << "Enter the number you want to add: ";
                cin >> addNum;
                collection.push_back(addNum);
                break;
            }
            case 'a':
            {
                int addNum {};
                cout << "Enter the number you want to add: ";
                cin >> addNum;
                collection.push_back(addNum);
                break;
                
            }
            case 'M':
            {
                //Print the mean of the collection
                int sum {};
                for (int i {0}; i < collection.size(); i++)
                {
                   sum += collection[i];
                   
                }
                int mean = sum/collection.size();
                cout << "Mean: " << mean << endl;
                break;
                
            }
            case 'm':
            {
                //Print the mean of the collection
                int sum {};
                for (int i {0}; i < collection.size(); i++)
                {
                   sum += collection[i];
                   
                }
                int mean = sum/collection.size();
                cout << "Mean: " << mean << endl;
                break;
                
            }
            case 'S':
            {
                //Display the smallest in the collection
                int smallest {};
                for (int i {0}; i <collection.size(); i++)
                {
                    //Whatever value is in i will be put into smallest
                    //Check if this is the first iteration
                    if (i == 0)
                    {
                        smallest = collection[i];
                    }
                    
                    if (collection[i] < smallest)
                    {
                        //First iteration, this won't be called
                        //Update collection[i] to the smallest number
                        smallest = collection[i];
                    }
                    
                }
                cout <<"The smallest number in the collection is: " << smallest << endl;
                break;
                
            }
            case 's':
            {
                //Display the smallest in the collection
                int smallest {};
                for (int i {0}; i <collection.size(); i++)
                {
                    //Whatever value is in i will be put into smallest
                    //Check if this is the first iteration
                    if (i == 0)
                    {
                        smallest = collection[i];
                    }
                    
                    if (collection[i] < smallest)
                    {
                        //First iteration, this won't be called
                        //Update collection[i] to the smallest number
                        smallest = collection[i];
                    }
                    
                }
                cout <<"The smallest number in the collection is: " << smallest << endl;
                break;
                
            }
            case 'L':
            {
                //Display the largest number in the collection
                int largest {};
                for (int i {0}; i < collection.size(); i++)
                {
                    //Whatever value is in i will be put into smallest
                    //Check if this is the first iteration
                    if (i == 0)
                    {
                        //10 is currently largest
                        largest = collection[i];
                    }
                    
                    if (collection[i] > largest && i > 0)
                    {
                        //First iteration, this won't be called
                        //Update collection[i] to the smallest number
                        largest = collection[i];
                    }
                    
                }
                
                cout <<"The largest number in the collection is: " << largest << endl;
                break;
            
                
                }
            case 'l':
            {
                //Display the largest number in the collection
                int largest {};
                for (int i {0}; i < collection.size(); i++)
                {
                    //Whatever value is in i will be put into smallest
                    //Check if this is the first iteration
                    if (i == 0)
                    {
                        //10 is currently largest
                        largest = collection[i];
                    }
                    
                    if (collection[i] > largest && i > 0)
                    {
                        //First iteration, this won't be called
                        //Update collection[i] to the smallest number
                        largest = collection[i];
                    }
                    
                }
                
                cout <<"The largest number in the collection is: " << largest << endl;
                break;
                
            }
            case 'q':
            {
                break;
                
            }
            case 'Q':
            {
                break;
                
            }
            default:
            {
                cout << "Unknown selction made, please try again" << endl;
                break;
            }
        }
    } while (selection !='Q' && selection != 'q');
    return 0;
}