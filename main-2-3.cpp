#include <iostream>
using namespace std;

extern void two_five_nine(int array[], int n);

int main() {
    int array[7] = {1, 2, 5, 2, 9, 9, 4};
    two_five_nine(array, 7);
    return 0;
}