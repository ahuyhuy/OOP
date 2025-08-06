#include <iostream>
using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits) {
    int result = 0;
    int pos = 1;
    for (int i = number_of_digits -1; i >= 0; i--) {
        result += binary_digits[i] * pos;
        pos = pos * 2;
    }
    return result;
}