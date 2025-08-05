#include <iostream>
using namespace std;

void count_digits(int array[4][4]) {
    for (int n = 0; n < 10; n++) {
        int digit_count = 0;
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (array[i][j] == n) {
                    digit_count++;
                }
            }
        }
        cout << n << ":" << digit_count << ";";
    }
    cout << endl;
    return;
}