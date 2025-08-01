#include <iostream>

bool is_ascending(int array[], int n) {
    bool result = true;
    if (n < 1) {
        return false;
    } else if (n == 1) {
        return result;
    }

    for (int i = 1; i < n; i++) {
        if (array[i] < array[i-1]) {
            result = false;
        }
    }
    return result;
}