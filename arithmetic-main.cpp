#include <iostream>
#include <string>
using namespace std;

extern int base_2_to_10(string binary_num);
extern string base_10_to_2(int decimal);
extern string add_b(string num1, string num2);
string subtract_b(string num1, string num2);

int main() {
    string num_b = "100000";
    int num = base_2_to_10(num_b);
    cout << num_b << " in binary is " << num << " in decimal" << endl;
    string n1 = "101011";
    string n2 = "1110";
    cout << n1 << " plus " << n2 << " is " << add_b(n1, n2) << endl;
    cout << n1 << " minus " << n2 << " is " << subtract_b(n1, n2) << endl;
    return 0;
}