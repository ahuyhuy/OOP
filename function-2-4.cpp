#include <iostream>
using namespace std;

int array_min(int integers[], int length) {
    if (length <= 0) {
        return -1;
    }
    int result = integers[0];
    for (int i = 1; i < length; i++) {
        if (result > integers[i]) {
            result = integers[i];
        }
    }
    return result;
}

int array_max(int integers[], int length) {
    if (length <= 0) {
        return -1;
    }
    int result = integers[0];
    for (int i = 1; i < length; i++) {
        if (result < integers[i]) {
            result = integers[i];
        }
    }
    return result;
}

int sum_min_max(int integers[], int length) {
    if (length <= 0) {
        return -1;
    }
    int min = array_min(integers, length);
    int max = array_max(integers, length);
    return (min+max);
}