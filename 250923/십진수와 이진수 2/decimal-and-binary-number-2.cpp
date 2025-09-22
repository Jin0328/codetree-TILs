#include <iostream>
#include <vector>

using namespace std;

string N;

int toDecimal(string &N){
    int num = 0;

    for(char c : N){
        num = 2 * num + (c - '0');
    }
    return num;
}

void toBinary(int &n){
    vector<int> result;
    while(n > 1){
        result.push_back(n % 2);
        n /= 2;
    }
    result.push_back(n);

    for(int i = result.size() - 1; i >= 0; i--){
        cout << result[i];
    }
}

int main() {
    cin >> N;
    
    int result = toDecimal(N) * 17;
    toBinary(result);

    return 0;
}