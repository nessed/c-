#include <iostream>
using namespace std;

int main() {
  int r[] = {1,3,33, 2, 3, 4,55};
  int sum = 0;
  for (int i = 0; i < 6; i++) {
    if(r[i+1]>r[i]){
      sum = r[i+1];
    }
  }
  cout << sum;
  return 0;
}
