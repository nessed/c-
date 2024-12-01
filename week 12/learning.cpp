#include <iostream>
using namespace std;

int main() {
    string name = "Bro";
    string* pName = &name;  // Pointer to name
    cout << "Address of name: " << pName << endl; // Prints address
    cout << "Value of name: " << *pName << endl;  // Dereference to get value
    cout << "Hello" << endl; // Prints "Hello"
    return 0;
}
