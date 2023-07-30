#include <iostream>
//import function-1-1

// Function declaration
int array_sum(int array[], int n);

int main() {
    // Test cases for the prac 1-1
    
    //single integer
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int sum1 = array_sum(arr1, size1);
    std::cout << "Sum of array 1: " << sum1 << std::endl;

    //two integer
    int arr2[] = {10, 20, 30, 40, 50};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int sum2 = array_sum(arr2, size2);
    std::cout << "Sum of array 2: " << sum2 << std::endl;

    //single integer in whole array
    int arr3[] = {5};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    int sum3 = array_sum(arr3, size3);
    std::cout << "Sum of array 3: " << sum3 << std::endl;

    //empty array
    int arr4[] = {};
    int size4 = sizeof(arr4) / sizeof(arr4[0]);
    int sum4 = array_sum(arr4, size4);
    std::cout << "Sum of array 4: " << sum4 << std::endl;

    return 0;
}
