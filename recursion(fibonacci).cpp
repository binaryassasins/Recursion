#include <iostream>
#include <cstdlib>

using namespace std;

int fibonacci(int firstTerm) {
  if (firstTerm == 0 || firstTerm == 1) {
    return firstTerm;
  }
  else {
    return (fibonacci(firstTerm - 1) + fibonacci(firstTerm - 2));
  }
}

int main() {
  long long int nthFibonacci, firstTerm = 0;
  // Ask the user how many terms that should the system display
  cout << "Enter the number of terms to display: ";
  cin >> nthFibonacci;
  
  cout << "Fibonacci series:";
  // Loop through to nthFibonacci
  while (firstTerm < nthFibonacci) {
    cout << " " << fibonacci(firstTerm);
    //increase the first term by 1
    firstTerm++;
  }
  cout << endl;
  system ("pause");
  return 0;
}