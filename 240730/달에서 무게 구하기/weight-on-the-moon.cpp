#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    cout << fixed;

    int weight = 13;
    double gravity = 0.165;

    cout << weight << " * ";
    cout.precision(6);
    cout << gravity << " = " << weight*gravity << endl;
    return 0;
}