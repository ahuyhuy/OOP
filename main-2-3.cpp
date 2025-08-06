#include <iostream>
using namespace std;

extern int sum_if_palindrome(int integers[], int length);

int main() {
    int array[8] = {1, 2, 3, 4, 4, 4, 2, 1};
    int result = sum_if_palindrome(array, 8);
    cout << result << endl;
    return 0;
}