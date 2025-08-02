#include <iostream>
using namespace std;

extern bool is_fanarray(int array[], int n);

int main() {
    int array1[4] = {1, 4, 4, 1};
    int array2[5] = {1, 3, 4, 3, 1};
    cout << "array 1: " << is_fanarray(array1, 4) << "\narray 2: " << is_fanarray(array2, 5) << endl;
    return 0;
}