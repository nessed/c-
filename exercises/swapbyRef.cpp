#include <iostream>
using namespace std;

void swap(int &x, int &y){
  int temp =0;
  temp = x;
  x=y;
  y=temp;
  cout<<x<<" , "<<y;
}

int main() {
  int x =1;
  int y=2;
  swap(x,y);
return 0;
}