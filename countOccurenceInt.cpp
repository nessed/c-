#include <iostream>
using namespace std;

int count(int number, int n) {
  int count = 0;
  while (number > 0) {
    int lastDigit = number % 10;
    if (lastDigit == n) {
      count = count + 1;
    }
    number /= 10;
  }
  return count;
}

int main() {
  int count1 = count(12341, 1);
  cout << count1;
  return 0;
}
