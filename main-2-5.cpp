#include <iostream>

// Function declaration
bool is_descending(int array[], int n);

int main() {
    // Test cases
    int arr1[] = {5, 4, 3, 2, 1};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    bool result1 = is_descending(arr1, size1);
    std::cout << "Array 1 is in descending order: " << std::boolalpha << result1 << std::endl;

    int arr2[] = {1, 2, 3, 4, 5};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    bool result2 = is_descending(arr2, size2);
    std::cout << "Array 2 is in descending order: " << std::boolalpha << result2 << std::endl;

    int arr3[] = {5, 4, 4, 2, 1};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    bool result3 = is_descending(arr3, size3);
    std::cout << "Array 3 is in descending order: " << std::boolalpha << result3 << std::endl;

    int arr4[] = {};
    int size4 = sizeof(arr4) / sizeof(arr4[0]);
    bool result4 = is_descending(arr4, size4);
    std::cout << "Array 4 is in descending order: " << std::boolalpha << result4 << std::endl;

    return 0;
}
