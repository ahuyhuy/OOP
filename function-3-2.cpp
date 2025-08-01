#include <iostream>
#include <algorithm>
using namespace std;

int median_array(int array[], int n) {
    if (n % 2 == 0 || n < 1) {
        return 0;
    }
    sort(array, array + n);
    int result = array[n/2];
    return result;
}