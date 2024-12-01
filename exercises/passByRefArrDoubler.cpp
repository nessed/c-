#include <iostream>
using namespace std;

void swap(int arr[],int size){
  for(int i = 0; i<size;i++){
    arr[i] = arr[i]*arr[i];
    cout<<arr[i]<<endl;

  }
}
int main() {
  int arr[] = {2,4,8};
  int size =sizeof(arr)/sizeof(arr[0]);
  swap(arr,size);
return 0;
}