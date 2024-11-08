#include <iostream>
using namespace std;

// Function to calculate x raised to a power (x^pow)
int power(int x, int pow) {
    int result = 1;  // Start with 1, as multiplying by 1 doesn’t change the result
    int count = pow;

    while (count > 0) {
        result = result * x;  // Multiply result by x each time
        count = count - 1;    // Decrease the power count by 1
    }

    return result;
}

int main() {
    int result = power(2, 3);  // This should calculate 2^3 = 8
    cout << "Result: " << result << endl;
    return 0;
}
