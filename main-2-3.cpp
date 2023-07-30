#include <iostream>

// Function declaration
void two_five_nine(int array[], int n);

int main() {
    // Test cases
    int arr1[] = {2, 5, 9, 2, 9, 9, 5, 2, 5, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    two_five_nine(arr1, size1);

    int arr2[] = {2, 2, 2, 2};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    two_five_nine(arr2, size2);

    int arr3[] = {5, 5, 5, 5};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    two_five_nine(arr3, size3);

    int arr4[] = {9, 9, 9, 9, 9};
    int size4 = sizeof(arr4) / sizeof(arr4[0]);
    two_five_nine(arr4, size4);

    int arr5[] = {1, 3, 7, 8};
    int size5 = sizeof(arr5) / sizeof(arr5[0]);
    two_five_nine(arr5, size5);

    int arr6[] = {};
    int size6 = sizeof(arr6) / sizeof(arr6[0]);
    two_five_nine(arr6, size6);

    return 0;
}
