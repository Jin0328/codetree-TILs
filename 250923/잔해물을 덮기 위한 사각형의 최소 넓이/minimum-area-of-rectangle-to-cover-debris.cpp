#include <iostream>

using namespace std;

#define OFFSET 1000;

int x1[2], y1[2];
int x2[2], y2[2];

int square[2001][2001];

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];

    for(int i = 0; i < 2; i++){
        x1[i] += OFFSET; x2[i] += OFFSET;
        y1[i] += OFFSET; y2[i] += OFFSET;
    }

    // 첫번쨰 직사각형은 1
    for(int i = x1[0]; i < x2[0]; i++){
        for(int j = y1[0]; j < y2[0]; j++){
            square[i][j] = 1;
        }
    }

    // 두 번째 직사각형은 0
    for(int i = x1[1]; i < x2[1]; i++){
        for(int j = y1[1]; j < y2[1]; j++){
            square[i][j] = 0;
        }
    }

    // 경계 찾기
    int x_min = 2000, x_max = 0, y_min = 2000, y_max = 0;
    int result = 0;
    for(int i = 0; i < 2001; i++){
        for(int j = 0; j < 2001; j++){
            if(square[i][j] == 1){
                if(i < x_min){
                    x_min = i;
                }
                if(i > x_max){
                    x_max = i;
                }
                if(j < y_min){
                    y_min = j;
                }
                if(j > y_max){
                    y_max = j;
                }
            }
        }
    }
    if(x_min == 2000 && x_max == 0 && y_min == 2000 && y_max == 0 ){
        result = 0;
    } else{
        result = (x_max - x_min + 1) * (y_max - y_min + 1);
    }

    cout << result << "\n";

    return 0;
}