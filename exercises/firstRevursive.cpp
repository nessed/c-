#include <iostream>
using namespace std;

void steps(int stepss){
  if(stepss >0){
    cout<<"Step taken"<<endl;
    steps(stepss-1);
  }
}

int main() {
  steps(10);
  return 0;
}
 