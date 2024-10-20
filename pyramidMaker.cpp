#include <iostream> 
using namespace std;
int main() {
  int totalRows = 5;
  for(int i =1 ;i<=totalRows;i++){
    for(int j=1; j<=totalRows-i;j++){
      cout<<" ";
      } 
  for(int j =1; j<=i;j++){
    cout<<"X ";
  }  
    
    cout<<endl;
  }
return 0; 
}
