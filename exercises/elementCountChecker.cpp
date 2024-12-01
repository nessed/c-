#include <iostream>
#include <cctype>  // For toupper()

using namespace std;

void elementCheck(int arr[], int size, int n) {
  int temp = 0;  
  for (int i = 0; i < size;i++){
    if(arr[i] == n){
      temp = temp + 1; 
    }

    }
  cout<<temp;
}

int main() {
  int arr[] = {12,2,2,2,1,2,3};
  int size = sizeof(arr)/sizeof(arr[0]);
    elementCheck(arr,size,2);  // Call the doubler function with the string "hello"
    return 0;
}
