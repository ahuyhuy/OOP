#include <iostream>
using namespace std;

extern int max_element(int array[], int n);

int main() {
    int array[6] = {5, 2, 3, 4, 1, 6};
    int result = max_element(array, 6);
    cout << "the maximum element of the array is: " << result << endl;
    return 0;
}