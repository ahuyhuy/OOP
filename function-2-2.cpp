#include <iostream>

int max_element(int array[], int n) {
    if (n < 1) {
        return 0;
    }
    int result = array[0];
    for (int i = 1; i < n; i++) {
        if (result < array[i]) {
            result = array[i];
        }
    }
    return result;
}