#include <iostream>
#include <vector>

using namespace std;



int main() {
    int n, x1, x2;
    cin >> n;
    vector<int> line(101, 0);

    while(n--){
        cin >> x1 >> x2;
        for(int i = x1; i <= x2; i++){
            line[i]++;
        }
    }

    int max = 0;
    for(auto iter : line){
        if(iter > max){
            max = iter;
        }
    }

    cout << max << "\n";

    return 0;
}