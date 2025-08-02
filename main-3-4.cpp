#include <iostream>
using namespace std;

extern void print_pass_fail(char grade);

int main() {
    char grade1 = 'B';
    char grade2 = 'D';
    char grade3 = 'F';
    print_pass_fail(grade1);
    print_pass_fail(grade2);
    print_pass_fail(grade3);
}