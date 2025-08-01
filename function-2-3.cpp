#include <iostream>
using namespace std;

void two_five_nine(int array[], int n) {
    if (n < 1) {
        cout << "invalid length parameter" << endl;
        return;
    }
    int twos = 0;
    int fives = 0;
    int nines = 0;
    for (int i = 0; i < n; i++) {
        switch (array[i]) {
            case 2:
                twos++;
                break;
            case 5:
                fives++;
                break;
            case 9:
                nines++;
                break;
            default:
                break;
        }
    }
    cout << "2:" << twos << ";5:" << fives << ";9:" << nines << ";" << endl;
    return;
}