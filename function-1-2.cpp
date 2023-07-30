double array_mean(int array[], int n) {
    if (n < 1) {
        return 0.0;
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += array[i];
    }

    double mean = static_cast<double>(sum) / n;
    return mean;
}
