#include <iostream> 
using namespace std;

void swap(int &x, int &y){
  int temp = x;
  x=y;
  y=temp;

}

int main() {
  
  int x = 1;
  int y = 2;
  cout<<"X is "<<x<<endl<<"Y is "<<y<<endl;
  swap(x,y);
  cout<<"X is "<<x<<endl<<"Y is "<<y<<endl;
  
  
return 0; 
}


