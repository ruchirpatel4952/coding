#include <iostream>

// Function declaration
int min_element(int array[], int n);

int main() {
    // Test cases
    int arr1[] = {5, 2, 9, 1, 7};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int min1 = min_element(arr1, size1);
    std::cout << "Minimum element in array 1: " << min1 << std::endl;

    int arr2[] = {10, 20, 5, 15};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int min2 = min_element(arr2, size2);
    std::cout << "Minimum element in array 2: " << min2 << std::endl;

    int arr3[] = {8};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    int min3 = min_element(arr3, size3);
    std::cout << "Minimum element in array 3: " << min3 << std::endl;

    int arr4[] = {};
    int size4 = sizeof(arr4) / sizeof(arr4[0]);
    int min4 = min_element(arr4, size4);
    std::cout << "Minimum element in array 4: " << min4 << std::endl;

    return 0;
}
