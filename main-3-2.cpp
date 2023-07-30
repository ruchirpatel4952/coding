#include <iostream>

// Function declaration
int median_array(int array[], int n);

int main() {
    // Test cases
    int arr1[] = {3, 5, 2, 1, 4};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int median1 = median_array(arr1, size1);
    std::cout << "Median of array 1: " << median1 << std::endl;

    int arr2[] = {1, 2, 3, 4, 5, 6};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int median2 = median_array(arr2, size2);
    std::cout << "Median of array 2: " << median2 << std::endl;

    int arr3[] = {1, 2, 3, 4, 5};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    int median3 = median_array(arr3, size3);
    std::cout << "Median of array 3: " << median3 << std::endl;

    int arr4[] = {2};
    int size4 = sizeof(arr4) / sizeof(arr4[0]);
    int median4 = median_array(arr4, size4);
    std::cout << "Median of array 4: " << median4 << std::endl;

    int arr5[] = {};
    int size5 = sizeof(arr5) / sizeof(arr5[0]);
    int median5 = median_array(arr5, size5);
    std::cout << "Median of array 5: " << median5 << std::endl;

    return 0;
}
