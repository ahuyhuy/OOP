#include <iostream>

double array_mean(int array[], int n) {
    if (n < 1) {
        return 0;
    }
    double result = 0;
    for (int i = 0; i < n; i++) {
        result += array[i];
    }
    result = result / n;
    return result;
}