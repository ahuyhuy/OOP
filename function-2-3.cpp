#include <iostream>
using namespace std;

bool is_palindrome(int integers[], int length) {
    if (length <= 0) {
        return false;
    }
    for (int i = 0; i < (length/2); i++) {
        if (integers[i] != integers[length-1-i]) {
            return false;
        }
    }
    return true;
}

int sum_array_elements(int integers[], int length) {
    if (length <= 0) {
        return -1;
    }
    int result = 0;
    for (int i = 0; i < length; i++) {
        result += integers[i];
    }
    return result;
}

int sum_if_palindrome(int integers[], int length) {
    if (length <= 0) {
        return -1;
    }
    if (is_palindrome(integers, length) == 0) {
        return -2;
    } else {
        int result = sum_array_elements(integers, length);
        return result;
    }
    
}