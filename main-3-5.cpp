#include <iostream>

// Function declaration
double sum_even(double array[], int n);

int main() {
    // Test case
    double arr[] = {1.5, 2.2, 3.1, 4.8, 5.7, 6.6};
    int size = sizeof(arr) / sizeof(arr[0]);

    double sum = sum_even(arr, size);
    std::cout << "Sum of elements in even positions: " << sum << std::endl;

    return 0;
}
