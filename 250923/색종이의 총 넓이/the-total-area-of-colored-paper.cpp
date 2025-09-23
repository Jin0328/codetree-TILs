#include <iostream>

using namespace std;

#define OFFSET 100;

int N;
int x[100], y[100];

int square[201][201];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
        x[i] += OFFSET; y[i] += OFFSET;
    }

    // Please write your code here.
    for(int i = 0; i < N; i++){
        for(int j = x[i]; j < x[i] + 8; j++){
            for(int k = y[i]; k < y[i] + 8; k++){
                square[j][k] = 1;
            }
        }
    }

    int cnt = 0;
    for(int i = 0; i < 201; i++){
        for(int j = 0; j < 201; j++){
            if(square[i][j] == 1){
                cnt++;
            }
        }
    }
    
    cout << cnt << endl;
    

    return 0;
}