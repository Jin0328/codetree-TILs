#include <iostream>
#include <algorithm>

using namespace std;

// 십진수로 변환
int toDecimal(int &a, string &n){
    int num = 0;
    for(char c : n){
        num = num * a + (c -'0');
    }
    return num;
}

// 십진수를 B진수로
string toB(int &decimal, int &b){
    string s;
    while(decimal > b - 1){
        s.push_back((decimal % b) + '0');
        decimal /= b;
    }
    s.push_back(decimal + '0');
    reverse(s.begin(), s.end());
    return s;
}

int a, b;
string n;

int main() {
    cin >> a >> b;
    cin >> n;

    // Please write your code here.
    int decimal = toDecimal(a, n);
    string s = toB(decimal, b);

    cout << s;

    return 0;
}