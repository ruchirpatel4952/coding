#include <iostream>

// Function declaration
int sum_two_arrays(int array[], int secondarray[], int n);

int main() {
    // Test cases
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    int sum = sum_two_arrays(arr1, arr2, size);
    std::cout << "Sum of arrays: " << sum << std::endl;

    int arr3[] = {10, 20, 30, 40, 50};
    int arr4[] = {5, 10, 15, 20, 25};
    size = sizeof(arr3) / sizeof(arr3[0]);
    sum = sum_two_arrays(arr3, arr4, size);
    std::cout << "Sum of arrays: " << sum << std::endl;

    int arr5[] = {1, 1, 1, 1, 1};
    int arr6[] = {2, 2, 2, 2, 2};
    size = sizeof(arr5) / sizeof(arr5[0]);
    sum = sum_two_arrays(arr5, arr6, size);
    std::cout << "Sum of arrays: " << sum << std::endl;

    int arr7[] = {};
    int arr8[] = {};
    size = sizeof(arr7) / sizeof(arr7[0]);
    sum = sum_two_arrays(arr7, arr8, size);
    std::cout << "Sum of arrays: " << sum << std::endl;

    return 0;
}
