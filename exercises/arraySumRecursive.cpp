#include <iostream>
using namespace std;

int sumArray(int arr[], int n) {
    // Base case: If only one element is left
    if (n == 1) {
        return arr[0];
    }

    return arr[n - 1] + sumArray(arr, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Sum of elements in array: " << sumArray(arr, n) << endl;
    return 0;
}
