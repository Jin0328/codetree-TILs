#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    double c;

    cin >> a >> b;
    c = double(a + b) / (a - b);

    cout << fixed;
    cout.precision(2);

    cout << c << endl;
    return 0;
}