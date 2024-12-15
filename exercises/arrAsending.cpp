#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 1, 4, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Sorting the array in ascending order (Bubble Sort)
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {
            cout<<arr[j]<<" ";

            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        cout<<endl;
    }

    // Display the sorted array
    cout << "Sorted Array in Ascending Order:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
