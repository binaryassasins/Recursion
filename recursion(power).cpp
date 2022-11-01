/**
 * @file recursion(power).cpp
 * @Mohamad Syafiq Asyraf Bin Bharudin (https://github.com/binaryassasins)
 * @brief A program that calculates the exponent function like pow (x, y) using recursive method. 
 * @version 0.1
 * @date 2022-11-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <cstdlib>

using namespace std;

int pow (int x, int exponent) {
  // termination value
  int count = 0;
  // stopping condition
  if (count == exponent) {
    return 1;
  }
  else {
    /*
      tracing: example value [x=4, exponent=3]
      4 * pow (4, 2) -> 4 * 16 = 64#
      count = 1
          4 * pow (4, 1) -> 4 * 4 = 16
          count = 2
              4 * pow (4, 0) -> 4 * 1 = 4
              count = 3
                  return 1
    */            
    return (x * pow (x, exponent-1));
    // increase counter
    count++;
  }
}

int main () {
  int num, exponent;
  cout << "Enter your number: ";
  cin >> num;
  cout << "Enter value of exponent: ";
  cin >> exponent;
  cout << "pow(" << num << "," << exponent << "): " << pow(num, exponent) << endl;
  system ("pause");
  return 0;
}