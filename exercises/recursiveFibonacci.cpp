#include <iostream> // Include the iostream header
using namespace std; // Use the standard namespace


//sample output 
// 1,1,2,3,5
int fib(int n){
    if(n == 0){
        return 0;
    } else if(n==1){
        return ;
    } 
    return fib(n-1) + fib(n-2);
}
int main(){ 
    int n = 5;
    int result = fib(n);
    cout << result;

    return 0;

}