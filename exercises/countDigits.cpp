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

int countOfDigits(int num){
   int count = 0;
  while(num>0){
    num = num/10;
    ++count; 
  }
  return count;
}

int main() {
    int number = input();
    int result = countOfDigits(number);  // Call the function
    print(result);
  

    return 0;
}
