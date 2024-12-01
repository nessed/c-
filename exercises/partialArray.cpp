#include <iostream>
using namespace std;

const int CAPACITY = 100;
int values[CAPACITY];

void print_array(int size) {
  for (int i = 0; i < size; i++)
    cout << values[i] << endl;
}

int main() {
  int size = 0; // Initialize size to 0
  int input;

  cout << "Enter numbers (end input with EOF or an invalid input):" << endl;

  // Reading user input and storing it in the array
  while (cin >> input) {
    if (size < CAPACITY) {
      values[size] = input;
      size++;
    } else {
      cout << "Capacity reached!" << endl;
      break;
    }
  }

  // Printing the entered numbers
  print_array(size);

  return 0;
}
