#include <iostream>
using namespace std;

extern bool is_ascending(int array[], int n);

int main() {
    int array1[3] = {1, 2, 3};
    int array2[4] = {1, 2, 3, 1};
    cout << "array 1: " << is_ascending(array1, 3) << "\narray2: " << is_ascending(array2, 4) << endl;
    return 0;
}