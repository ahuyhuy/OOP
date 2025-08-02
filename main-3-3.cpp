#include <iostream>
#include <iomanip>
using namespace std;

extern double weighted_average(int array[], int n);

int main() {
    int array[6] = {1, 1, 1, 1, 1, 300};
    double result = weighted_average(array, 6);
    cout << fixed << setprecision(2) << "The weighted average is " << result << endl;
    return 0;
}