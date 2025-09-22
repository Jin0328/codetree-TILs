#include <iostream>

using namespace std;

int n;

int main() {
    cin >> n;

    // Please write your code here.
    int digits[20];
    int cnt = 0;
    while(n > 2){
        digits[cnt++] = n % 2;
        n /= 2;
    }

    digits[cnt++] = n;

    for(int i = cnt - 1; i >= 0; i--){
        cout << digits[i];
    }

    return 0;
}