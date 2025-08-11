#include <iostream>
#include <memory>
using namespace std;

double arrayMax(double *array, int n) {
    double result = array[0];
    for (int i = 1; i < n; i++) {
        if (result < array[i]) {
            result = array[i];
        }
    }
    return result;
}

void changeValue(double* val) {
    *val = 42;
    return;
}

double *dynamicArray(int N, double M) {
    double *new_array = new double[N];
    for (int i = 0; i < N; i++) {
        new_array[i] = M;
    }
    return new_array;
}

void printArray(double *array, int n) {
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}
