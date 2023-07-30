double weighted_average(int array[], int n) {
    if (n < 1) {
        return 0;
    }

    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (array[i] == array[j]) {
                count++;
            }
        }
        sum += static_cast<double>(array[i] * count) / n;
    }

    return sum;
}
