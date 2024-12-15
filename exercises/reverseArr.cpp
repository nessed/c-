#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int temp = 0;
    int last = size - 1; // 
    cout<<size<<" "<<last<<endl;

    // Reverse the array
    for (int i = 0; i < size / 2; i++) { // Fix: Loop until the midpoint
        temp = arr[i];           // Store current element in temp
        arr[i] = arr[last];      // Swap with the element at the other end
        arr[last] = temp;        // Assign temp to the other end
        last = last - 1;         // Move last pointer one step left
    }

    // Print the reversed array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
