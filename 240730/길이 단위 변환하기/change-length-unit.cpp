#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    cout << fixed;

    double ft = 30.48;
    double mi = 160934;

    double a, b;
    a = 9.2 * ft;
    b = 1.3 * mi;

    cout << fixed;
    cout.precision(1);

    cout << "9.2ft = " << a << "cm" << endl;
    cout << "1.3mi = " << b << "cm" << endl;
    return 0;
}