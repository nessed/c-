#include <iostream>
using namespace std;
//replace 
int main() {
    int arr[] = {1,2,3,4,5};
    int n = arr[1];
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"Last element "<<arr[size-1]<<endl;
     for(int i = 0; i < 5; i++){
        cout<<i+1<<" is "<<arr[i]<<endl;
        
    }
    arr[2] = arr[size-1];
    cout<<endl;
    // for(int i = 0; i < 5; i++){
    //     cout<<i+1<<" is "<<arr[i]<<endl;
        
    // }
    cout<<arr[2];
   


    //cout<<endl<<n<<" hello";
    return 0;
}
