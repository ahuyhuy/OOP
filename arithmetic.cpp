#include <iostream>
#include <string>
using namespace std;

extern string base_10_to_2(int decimal);

int base_2_to_10(string binary_num) {
    int length = binary_num.length();
    int pos = 1;
    int num = 0;
    for (int i = length - 1; i >= 0; i--) {
        int current_digit = binary_num[i] - '0';
        num = num + (pos * current_digit);
        pos = pos * 2;
    }
    return num;
}

string add_b(string num1, string num2) {
    int num1_dec = base_2_to_10(num1);
    int num2_dec = base_2_to_10(num2);
    int num3_dec = num1_dec + num2_dec;
    string num3 = base_10_to_2(num3_dec);
    return num3;
}

string subtract_b(string num1, string num2) {
    int num1_dec = base_2_to_10(num1);
    int num2_dec = base_2_to_10(num2);
    int num3_dec = num1_dec - num2_dec;
    string num3 = base_10_to_2(num3_dec);
    return num3;
}