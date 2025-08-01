#include <iostream>
#include <algorithm>
using namespace std;

extern int median_array(int array[], int n);

int main() {
    int array[5] = {5, 4, 4, 1, 2};
    cout << "The median is " << median_array(array, 5) << endl;
    return 0;
}