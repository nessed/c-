#include <iostream>
using namespace std;

void doubler(int array[], int size){
  for(int i = 0; i<size;i++){
    cout<<array[i]*2<<endl;
  }
}
int main() {
  int arr[] ={1,2,3};
  int size = sizeof(arr)/sizeof(arr[0]);
  doubler(arr,size);
  return 0;
}
