#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int temp;
    cin >> temp;

    if(temp < 0){
        cout << "ice" << endl;
    }
    else if(temp >= 100){
        cout << "vapor" << endl;
    }
    else
        cout << "water" << endl;
    return 0;
}