#include <iostream>
#include <string>
using namespace std;

extern void print_binary_str(std::string decimal_number);

int main() {
    string num = "10";
    print_binary_str(num);
    return 0;
}