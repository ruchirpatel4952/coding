#include <iostream>

// Function declaration
double weighted_average(int array[], int n);

int main() {
    // Test case
    int arr[] = {1, 2, 1, 4, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    double average = weighted_average(arr, size);
    std::cout << "Weighted average of the array: " << average << std::endl;

    return 0;
}
