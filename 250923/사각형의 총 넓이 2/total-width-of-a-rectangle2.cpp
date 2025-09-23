#include <iostream>
#include <cstring>

using namespace std;

int n, x1, x2, y1, y2;


int main() {
    cin >> n;
    int square[201][201];
    memset(square, 0, sizeof(square));

    while(n--){
        cin >> x1 >> y1 >> x2 >> y2;
        x1 += 100;
        y1 += 100;
        x2 += 100;
        y2 += 100;
        for(int i = x1; i < x2; i++){
            for(int j = y1; j < y2; j++){
                square[i][j] = 1;
            }
        }
    }

    int cnt = 0;
    for(int i = 0; i < 200; i++){
        for(int j = 0; j < 200; j++){
            if(square[i][j] == 1){
                cnt++;
            }
        }
    }
    cout << cnt;

    return 0;
}