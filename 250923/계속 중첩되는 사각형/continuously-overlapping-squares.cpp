#include <iostream>

using namespace std;

#define OFFSET 100

int n;
int x1[10], y1[10];
int x2[10], y2[10];

int square[201][201];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
        x1[i] += OFFSET; y1[i] += OFFSET;
        x2[i] += OFFSET; y2[i] += OFFSET;
    }

    // Please write your code here.
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int k = x1[i]; k < x2[i]; k++){
            for(int j = y1[i]; j < y2[i]; j++){
                if(count % 2 == 1){ // 파란색
                    square[k][j] = 1;
                } else {
                    square[k][j] = 2; // 빨간색
                }
            }
        }
        count++;
    }
    int result = 0;
    for(int i = 0; i < 201; i++){
        for(int j = 0; j < 201; j++){
            if(square[i][j] == 1){
                result++;
            }
        }
    }

    cout << result << "\n";

    return 0;
}