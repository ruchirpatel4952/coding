#include <iostream>

// Function declaration
double array_mean(int array[], int n);

int main() {
    // Test cases
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    double mean1 = array_mean(arr1, size1);
    std::cout << "Mean of array 1: " << mean1 << std::endl;

    int arr2[] = {10, 20, 30, 40, 50};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    double mean2 = array_mean(arr2, size2);
    std::cout << "Mean of array 2: " << mean2 << std::endl;

    int arr3[] = {5};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    double mean3 = array_mean(arr3, size3);
    std::cout << "Mean of array 3: " << mean3 << std::endl;

    int arr4[] = {};
    int size4 = sizeof(arr4) / sizeof(arr4[0]);
    double mean4 = array_mean(arr4, size4);
    std::cout << "Mean of array 4: " << mean4 << std::endl;

    return 0;
}
