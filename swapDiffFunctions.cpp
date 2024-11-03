#include <iostream>
using namespace std;

void getInput(int &num1, int &num2) {
  cout << "Enter 2 integers: ";
  cin >> num1 >> num2;
}

void swap(int &num1, int &num2) {
  if (num1 > num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
  }
}
void printNumbers(int &num1, int &num2) {
  cout << "Sorted integers in ascending order: " << num1<<" "<< num2;
}

int main() {
  int num1, num2;
  getInput(num1, num2);
  swap(num1, num2);
  printNumbers(num1, num2);

  return 0;
}
