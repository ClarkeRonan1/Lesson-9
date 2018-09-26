#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int result {};
    int data {};
    vector <int> vec {};
    cout << "Enter integers separated by spaces: ";
    cin >> data;
    vec.push_back(data);
    
    
    for (int i {1}; i <= vec.size(); i++)
        for (int j {1}; j <vec.size(); j++)
            cout << i << " and " << j << endl;
    return 0;
}