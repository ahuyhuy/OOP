#include <iostream>
using namespace std;

extern bool is_descending(int array[], int n);

int main() {
    int array1[3] = {3, 2, -1};
    int array2[4] = {1, 2, 3, 1};
    cout << "array 1: " << is_descending(array1, 3) << "\narray2: " << is_descending(array2, 4) << endl;
    return 0;
}