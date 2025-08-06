#include <iostream>
using namespace std;

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main() {
    int binary_digits[5] = {1, 0, 1, 1, 0};
    int decimal = binary_to_int(binary_digits, 5);
    cout << "In binary: ";
    for (int i = 0; i < 5; i++) {
        cout << binary_digits[i];
    }
    cout << endl;
    cout << "In decimal: " << decimal << endl;
}