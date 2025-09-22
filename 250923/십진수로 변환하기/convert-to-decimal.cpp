#include <iostream>

using namespace std;


int main() {
    string binary;
    cin >> binary;
    
    // Please write your code here.
    int num = 0;

    for(char c: binary){
        num = num * 2 + (c - '0');
    }
    cout << num;
    return 0;
}