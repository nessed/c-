#include <iostream>
using namespace std;

void input(int &radius){
  cout<<"Enter radius";
  cin>>radius;
}

void area(int radius){
  int area = 3.142*(radius*radius);
  cout<<"Area is "<< area;
  
}

int main() {
  int r;
  input(r);
  area(r);
  
  return 0;
}
