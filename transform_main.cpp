#include <iostream>
#include <string>
using namespace std;

extern string base_10_to_2(int decimal);

int main() {
    int num = 4;
    string binary = base_10_to_2(num);
    cout << "in decimal: " << num << endl;
    cout << "in binary: " << binary << endl;
    return 0;
}