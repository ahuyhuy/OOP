#include <iostream>
using namespace std;

extern double array_mean(int array[], int n);

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    double mean = array_mean(array, 5);
    cout.precision(3);
    cout << "The mean is: " << mean << endl;
    return 0;
}