#include <iostream>
using namespace std;

extern int array_sum(int array[], int n);

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int sum = array_sum(array, n);
    cout << "sum is " << sum << endl;
}