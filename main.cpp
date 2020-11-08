/**
 * @file main.cpp
 * @brief Week 10, C++ Review and warmup from CSI-230
 * @author Chris Nicholas
 * @assignment lab 10.1
 * @date 11/8/20
 *
*/

#include <iostream>
#include <string>
#include <vector>
#include "util.h"

using namespace std;

int main() {
    //Random item from vector of 5 objects
    vector<string> vecOfStrings = { "apple", "banana", "pear", "lime", "kiwi" };
    cout << "Vector of Strings: ";
    getVecOfStr(vecOfStrings);
    cout << "clue: setting srand in main" << endl << "Calling randomElement" << endl;
    srand(time(NULL));
    cout << "Random Element: " << randomElement(vecOfStrings) << endl;

    //Sum, Avg, Lowest, from vector of Doubles
    vector<double> vecOfDoubles = {16.3, 4.0, 201.6, -12.3, 42.7};
    cout << "Vector of Doubles: ";
    getVecOfNums(vecOfDoubles);

    //Sum
    cout << "Sum of Doubles: " << getSum(vecOfDoubles) << endl;
    //Avg
    cout << "Avg of Doubles: " << getAvg(vecOfDoubles) << endl;
    //Min
    cout << "Lowest Valued Double: " << getMin(vecOfDoubles) << endl;

    //MultiWord String
    string multiWord = "A little bird with a yellow bill";
    cout << "Multi-word String: " << multiWord << endl;
    cout << "Camel Case: " << camelCase(multiWord) << endl;
  
    return 0;
}
