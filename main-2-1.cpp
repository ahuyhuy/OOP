#include <iostream>
using namespace std;

extern int min_element(int array[], int n);

int main() {
    int array[6] = {5, 2, 3, 4, 1, 6};
    int result = min_element(array, 6);
    cout << "the minimum element of the array is: " << result << endl;
    return 0;
}