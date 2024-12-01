#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int num) {
   if(num <= 1) {           // Base case: if num is 1 or 0, return 1
       return 1;
   } else {
       return num * factorial(num - 1);  // Recursive case
   }
}

int main() {
    int number;
    cout << "Enter a number to find its factorial: ";
    cin >> number;

    int result = factorial(number);
    cout << "Factorial of " << number << " is " << result << endl;

    return 0;
}
