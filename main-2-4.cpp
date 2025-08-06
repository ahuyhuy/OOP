#include <iostream>
using namespace std;

extern int sum_min_max(int integers[], int length);

int main() {
    int array[4] = {1, 4, 5, 99};
    int result = sum_min_max(array, 4);
    cout << result << endl;
    return 0;
}