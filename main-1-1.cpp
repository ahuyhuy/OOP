#include <iostream>
using namespace std;

extern int sum_diagonal(int array[4][4]);

int main() {
    int array[4][4] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    cout << "the sum of the main diagonal is " << sum_diagonal(array) << endl;
}