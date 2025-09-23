#include <iostream>
#include <vector>

using namespace std;

int N, K;

int main() {
    cin >> N >> K;
    int A, B;
    vector<int> block(N + 1, 0);

    for (int i = 0; i < K; i++) {
        cin >> A >> B;

        for(int i = A; i <= B; i++){
            block[i]++; 
        }
    }

    int max = 0;
    for(auto iter : block){
        if(iter > max){
            max = iter;
        }
    }

    cout << max << "\n";

    return 0;
}