#include <iostream>
using namespace std;

extern int num_count(int array[], int n, int number);

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int number = 3;
    cout << "Number of array elements equal to " << number << ": " << num_count(array, n, number) << endl;
    return 0;
}