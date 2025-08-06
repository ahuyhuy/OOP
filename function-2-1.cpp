#include <iostream>
#include <string>
using namespace std;

void print_binary_str(std::string decimal_number) {
    int decimal = stoi(decimal_number, nullptr, 10);
    string binary_string;
    while (decimal > 0) {
        int remainder = decimal % 2;
        binary_string = to_string(remainder) + binary_string;
        decimal = (decimal - remainder) / 2;
    }
    cout << binary_string << endl;
    return;
}