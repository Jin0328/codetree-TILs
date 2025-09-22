#include <iostream>
#include <vector>

using namespace std;

int n;

int main() {
    cin >> n;

    // Please write your code here.
    vector<int> digits;
    while(n > 1){
        digits.push_back(n % 2);
        n /= 2;
    }
    digits.push_back(n);


    for(int i = digits.size() - 1; i >= 0; i--){
        cout << digits[i];
    }

    return 0;
}