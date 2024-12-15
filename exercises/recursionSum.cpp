#include <iostream> // Include the iostream header
using namespace std; // Use the standard namespace

int sumRecursive(int n){
if(n == 1){
return 1;
}
return n + sumRecursive(n-1);
}

int main(){
    int su = sumRecursive(5);
    cout << su;

    return 0;

}