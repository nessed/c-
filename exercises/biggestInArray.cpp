#include <iostream>
using namespace std;

int main() {
  int n[3] = {1, 2, 3};
  int temp = 0;    
  int index;  
  for (int i = 0; i < 3; ++i) {
    if (n[i] > temp) {
      temp = n[i];
      index = i;
    }
  }
  cout << temp<<endl;
    cout<<index;

  return 0;
}
