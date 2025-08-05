#include <iostream>
using namespace std;

extern int is_identity(int array[10][10]);

int main() {
    int my_array[10][10];
    for (int i = 0; i < 10; i++) {
        for (int  j = 0; j < 10; j++) {
            if (i == j) {
                my_array[i][j] = 1;
            } else {
                my_array[i][j] = 0;
            }
        }
    }
    int my_other_array[10][10];
    for (int i = 0; i < 10; i++) {
        for (int  j = 0; j < 10; j++) {
            my_other_array[i][j] = 1;
        }
    }
    cout << "array 1: " << is_identity(my_array) << "\n array 2: " << is_identity(my_other_array) << endl;
    return 0;
}