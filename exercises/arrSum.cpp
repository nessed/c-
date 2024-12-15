#include <iostream>
using namespace std;
//1. What is the index of the last element in an array of size n?

int main() {
//cout<<endl;
int size = 5;
int size2 = 10;
int arr[size] = {10,10,10,10,10};
int sum = 0;
for(int i = 0; i < size ; i++){
    
    cout<<arr[i]<<endl;
    cout<<"+"<<endl;
    sum += arr[i];

}
cout<<sum;
cout<<endl;

  return 0;
}
