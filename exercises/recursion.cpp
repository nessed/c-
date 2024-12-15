#include <iostream>
using namespace std;

// Recursive function 
int addUp(int  &sum,int &num, int &base){
    if(base != 1){
        num = num-1;
        sum = sum + num;
        base = base - 1;
        addUp(sum,num,base); 
    } else {
        return sum;
    }
}

int main() {
    int number = 5;
    int base = 1;


    int sum = addUp(sum, number);
    cout<<"Hello " <<sum;
    return 0;
}
