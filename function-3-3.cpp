#include <iostream>

double weighted_average(int array[], int n) {
    if (n < 1) {
        return 0;
    }
    int weighted_sum = 0;
    for (int i = 0; i < n; i++) {
        int weight = 0;
        for (int j = 0; j < n; j++) {
            if (array[j] == array[i]) {
                weight++;
            }
        }
        weighted_sum += array[i] * weight;
    }
    double result = static_cast<double>(weighted_sum) / n;
    return result;
}