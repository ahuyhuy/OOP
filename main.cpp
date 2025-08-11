#include <iostream>
#include <memory>
using namespace std;

extern void changeValue(double* val);
extern void printArray(double *array, int n);
extern double arrayMax(double *array, int n);
extern double *dynamicArray(int N, double M);

int main() {
    double x = 41.99;
    double *px = &x;
    cout << x << " ";
    changeValue(px);
    cout << x << endl;

    double array[5] = {1.1, 1.2, 1.3, 1.4, 1.5};
    printArray(array, 5);
    cout << "Maximum is " << arrayMax(array, 5) << endl;

    cout << "New dynamic array: ";
    double *array2 = dynamicArray(6, 10);
    printArray(array2, 6);
    cout << "New dynamic array maximum: ";
    cout << arrayMax(array2, 6) << endl;
    delete[] array2;

    return 0;
}