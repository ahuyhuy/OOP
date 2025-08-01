#include <iostream>
using namespace std;

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main() {
    int array1[5] = {1, 2, 3, 4, 5};
    int array2[5] = {6, 7, 8, 9, 10};
    int n = 5;
    int sum = sum_two_arrays(array1, array2, n);
    cout << "The sum of both arrays is: " << sum << endl;
    return 0;
}