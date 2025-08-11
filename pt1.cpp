#include <iostream>
using namespace std;

int main() {
    double x = 10.101;
    char y = 'b';
    double *px = &x;
    char *py = &y;
    cout << *px << " " << *py << endl;
    return 0;
}