#include <iostream>

double arrayMax(double *array, int n) {
    double result = array[0];
    for (int i = 1; i < n; i++) {
        if (result < array[i]) {
            result = array[i];
        }
    }
    return result;
}