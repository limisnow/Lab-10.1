/**
 * @file util.cpp
 * @brief Week 10, C++ Review and warmup from CSI-230
 * @author Chris Nicholas
 * @assignment lab 10.1
 * @date 11/8/20
 *
*/
#include "util.h"

void getVecOfStr(vector<string> vecOfStrings) {
    int i;
    for (i = 0; i < vecOfStrings.size(); i++) {
        cout << vecOfStrings[i] << ", ";
    }
    cout << endl;
}

string randomElement(vector<string> vecOfStrings){
  return vecOfStrings[rand() & vecOfStrings.size()];
}

void getVecOfNums(vector<double> vecOfDoubles){
  int i;
    for (i = 0; i < vecOfDoubles.size(); i++) {
        cout << vecOfDoubles[i] << ", ";
    }
    cout << endl;
}

double getSum(vector<double> vecOfDoubles){
  double total = 0;
  int i;
  for (i = 0; i < vecOfDoubles.size(); i++){
    total += vecOfDoubles[i];
  }
  return total;
}

double getAvg(vector<double> vecOfDoubles){
  double avg = 0;
  int i;
  for (i = 0; i < vecOfDoubles.size(); i++){
    avg += vecOfDoubles[i];
  }
  
  return avg /= vecOfDoubles.size();
}

double getMin(vector<double> vecOfDoubles){
  double min = vecOfDoubles[0];
  int i;
  for (i = 0; i < vecOfDoubles.size(); i++){
    if (vecOfDoubles[i] < min){
      min = vecOfDoubles[i];
    }
  }
  return min;
}

string camelCase(string multiWord){
  string newString;
  int i;
  if (multiWord[0] < 91 && multiWord[0] > 64){
    newString += multiWord[0] + 32;
  }
  else{
    newString += multiWord[0];
  }
  for (i = 1; i < multiWord.length(); i++){
    if (multiWord[i] == ' '){
      i++;
      if (multiWord[i] < 91 && multiWord[i] > 64){
        newString += multiWord[i];
      }
      else{
        newString += multiWord[i] - 32;
      }
    }
    else if (multiWord[i] < 91 && multiWord[i] > 64){
      newString += multiWord[i] + 32;
    }
    else{
      newString += multiWord[i];
    }
  }
  return newString;
}
