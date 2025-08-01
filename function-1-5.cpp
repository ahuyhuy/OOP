#include <iostream>

int count_evens(int number) {
    if (number < 2) {
        return 0;
    }
    int result = 0;
    for (int i = 2; i < number; i += 2) {
        result++;
    }
    return result;
}