#include <iostream>
#include <string>
using namespace std;

string base_10_to_2(int decimal) {
    int decimal_clone = decimal;
    string binary_string;
    while (decimal_clone > 0) {
        int remainder = decimal_clone % 2;
        binary_string = to_string(remainder) + binary_string;
        decimal_clone = (decimal_clone - remainder) / 2;
    }
    return binary_string;
}