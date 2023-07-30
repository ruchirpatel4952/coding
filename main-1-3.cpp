#include <iostream>

// Function declaration
int num_count(int array[], int n, int number);

int main() {
    // Test cases
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int number1 = 3;
    int count1 = num_count(arr1, size1, number1);
    std::cout << "Number of occurrences of " << number1 << " in array 1: " << count1 << std::endl;

    int arr2[] = {10, 20, 30, 40, 50};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int number2 = 20;
    int count2 = num_count(arr2, size2, number2);
    std::cout << "Number of occurrences of " << number2 << " in array 2: " << count2 << std::endl;

    int arr3[] = {5, 5, 5, 5, 5};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    int number3 = 5;
    int count3 = num_count(arr3, size3, number3);
    std::cout << "Number of occurrences of " << number3 << " in array 3: " << count3 << std::endl;

    int arr4[] = {};
    int size4 = sizeof(arr4) / sizeof(arr4[0]);
    int number4 = 8;
    int count4 = num_count(arr4, size4, number4);
    std::cout << "Number of occurrences of " << number4 << " in array 4: " << count4 << std::endl;

    return 0;
}
