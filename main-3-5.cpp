#include <iostream>
#include <iomanip>
using namespace std;

extern double sum_even(double array[], int n);

int main() {
    double array[7] = {1.1, 2, 1.01, 2, 1.001, 34, 1};
    double result = sum_even(array, 7);
    cout << fixed << setprecision(3) << "The sum of even positions is " << result << endl;
    return 0;
}