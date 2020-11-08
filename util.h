/**
 * @file util.h
 * @brief Week 10, C++ Review and warmup from CSI-230
 * @author Chris Nicholas
 * @assignment lab 10.1
 * @date 11/8/20
 *
*/

#include <vector>
#include <iostream>

using namespace std;

//Print out the vector of strings
void getVecOfStr(vector<string> vecOfStrings);

//Gets a random string from the vector of strings
string randomElement(vector<string> vecOfStrings);

//Print out the vector of strings
void getVecOfNums(vector<double> vecOfDoubles);

//Get sum of Doubles
double getSum(vector<double> vecOfDoubles);

//Get avg of Doubles
double getAvg(vector<double> vecOfDoubles);

//Get Least of Doubles
double getMin(vector<double> vecOfDoubles);

//Turn String into CamelCase
string camelCase(string multiWord);
