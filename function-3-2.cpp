#include <algorithm>

int median_array(int array[], int n) {
    if (n <= 0 || n % 2 == 0) {
        return 0;
    }

    std::sort(array, array + n); // Sort the array in ascending order

    return array[n / 2];
}
