#include <iostream>
#include <memory>

double *dynamicArray(int N, double M) {
    double *new_array = new double[N];
    for (int i = 0; i < N; i++) {
        new_array[i] = M;
    }
    return new_array;
}