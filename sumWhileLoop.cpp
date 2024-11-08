#include <iostream>
using namespace std;

// Function to calculate the sum of digits of a number
int input(){
  int inp;
  cout<<"Enter";
  cin>>inp;
  return inp;
}

void print(int result){
  cout<<"Result is: "<<result;
}

int sumOfDigits(int num){
  int sum =0;
  int lastDigit =0;
  while(num>0){
    lastDigit = num % 10;
    sum += lastDigit;
    num = num/10;
  }
  return sum;
}

int main() {
    int number = input();
    int result = sumOfDigits(number);  // Call the function
    print(result);

    return 0;
}
