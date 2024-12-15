#include <iostream>
using namespace std;

// Recursive function to find maximum in the array
int max(int arr[], int n) {
    // Base case: If there's only one element, return that
    if (n == 1) {
        return arr[0];
    }

    // Recursive case: Find the max between the current last element and the recursive result
    int temp = max(arr, n - 1); // Recursive call
    if (arr[n - 1] > temp) {
        temp = arr[n - 1];
    }

    return temp;
}

int main() {
    // Example array
    int arr[] = {3, 1, 7, 5, 9, 2};
    int n = 6; // Size of the array manually set for simplicity

    // Call the recursive max function
    cout << "Maximum value in the array: " << max(arr, n) << endl;

    return 0;
}
