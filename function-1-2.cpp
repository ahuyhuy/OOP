#include <iostream>

int is_identity(int array[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            int expected_num = 0;
            if (i == j) {
                expected_num = 1;
            }
            if (array[i][j] != expected_num) {
                return 0;
            }
        }
    }
    return 1;
}