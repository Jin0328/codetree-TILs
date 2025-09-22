#include <iostream>
#include <vector>

using namespace std;

int N, B;

int main() {
    cin >> N >> B;

    // Please write your code here.
    vector<int> digits;
    while(N > B - 1){
        digits.push_back(N % B);
        N /= B;
    }
    digits.push_back(N);

    for(int i = digits.size() - 1; i >= 0; i--){
        cout << digits[i];
    }

    return 0;
}