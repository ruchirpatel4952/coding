#include <iostream>

// Function declaration
bool is_fanarray(int array[], int n);

int main() {
    // Test cases
    int arr1[] = {1, 2, 3, 2, 1};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    bool result1 = is_fanarray(arr1, size1);
    std::cout << "Array 1 is a fan array: " << std::boolalpha << result1 << std::endl;

    int arr2[] = {2, 4, 4, 2};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    bool result2 = is_fanarray(arr2, size2);
    std::cout << "Array 2 is a fan array: " << std::boolalpha << result2 << std::endl;

    int arr3[] = {1, 2, 1, 2, 1};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    bool result3 = is_fanarray(arr3, size3);
    std::cout << "Array 3 is a fan array: " << std::boolalpha << result3 << std::endl;

    int arr4[] = {1, 3, 5, 4, 2};
    int size4 = sizeof(arr4) / sizeof(arr4[0]);
    bool result4 = is_fanarray(arr4, size4);
    std::cout << "Array 4 is a fan array: " << std::boolalpha << result4 << std::endl;

    int arr5[] = {1};
    int size5 = sizeof(arr5) / sizeof(arr5[0]);
    bool result5 = is_fanarray(arr5, size5);
    std::cout << "Array 5 is a fan array: " << std::boolalpha << result5 << std::endl;

    int arr6[] = {};
    int size6 = sizeof(arr6) / sizeof(arr6[0]);
    bool result6 = is_fanarray(arr6, size6);
    std::cout << "Array 6 is a fan array: " << std::boolalpha << result6 << std::endl;

    return 0;
}
