#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    /*
     * Shipping cost calculator
     * 
     * Ask user for package dimension in inches
     * Length, width, height - as integers
     * 
     * All dimensions must be 10 inches or less 
     * or cannot ship it
     * 
     * Base cost 2.50
     * If package volume > 100 cubic inches
     * There is 10% surcharge
     * 
     * If package volume > 500 cubic inches
     * There is 25% surcharge
     */
     const double baseCost {2.50};
     const double over100 {baseCost + (2.5/100) * (10)};
     const double over500 {baseCost + (2.5/100) * (25)};
     
     const int tier1Threshold {100};
     const int tier2Threshold {500};
     const int maxDimensionLength {10};
     //Better to use constants for packageVolumes
     //And the thresholds
     cout << fixed << setprecision(2); 

     cout << over100 << endl;
     cout << over500 << endl;
     cout << "What are the package dimensions? L W H integers seperated by spaces: ";
     int length{}, width{}, height{};
     cin >> length >> width >> height;
     
     cout << endl;
     
     if (length <= maxDimensionLength && width <= maxDimensionLength && height <= maxDimensionLength)
     {
         //Do code
         double shippingCost {baseCost};
         int packageVolume {length * width * height};
         if (packageVolume > tier2Threshold)
         {
             cout << "The dimensions are: " << packageVolume << endl;
             cout << "This will cost: " << over500 << endl;
         }
         if (packageVolume > tier1Threshold && packageVolume < tier2Threshold)
         {
             cout << "The dimensions are: " << packageVolume << endl;
             cout << "This will cost: " << over100 << endl;
         }
         else
         {
             cout << "The dimensions are: " << packageVolume << endl;
             cout << "The base cost is " << baseCost << endl;
         }
     }
     else
    {
         cout << "Dimensions are too big for shipping! " << endl;
     }
    return 0;
}