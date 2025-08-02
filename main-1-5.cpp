#include <iostream>
using namespace std;

extern int count_evens(int number);

int main() {
    int number = 0;
    cout << "number of evens between 1 and " << number << " is: " << count_evens(number) << endl;
    return 0;
}