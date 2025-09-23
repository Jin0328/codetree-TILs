#include <iostream>
#include <vector>

using namespace std;


const int INF = 100000;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, size;
    char dir;
    cin >> n;

    int pos = INF;
    vector<int> line(INF * 2, -1);
    vector<int> is_visited_w(INF * 2, 0);
    vector<int> is_visited_b(INF * 2, 0);

    while(n--){
        cin >> size >> dir;
        // 흰색으로 색칠
        // 필요한 것 : 인덱스, 색깔, 칠해진 수
        if(dir == 'L'){
            for(int i = pos - size + 1; i <= pos; i++){
                line[i] = 0; // 흰색
                is_visited_w[i]++;
                if(is_visited_w[i] > 1 && is_visited_b[i] > 1){
                    line[i] = 2; // 회색
                }       
            }
            pos = pos - size + 1;
        } else {
            for(int i = pos; i < pos + size; i++){
                line[i] = 1; // 검은색
                is_visited_b[i]++;
                if(is_visited_w[i] > 1 && is_visited_b[i] > 1){
                    line[i] = 2; // 회색
                }
            }
            pos = pos + size - 1;
        }
    }

    int cntwht = 0, cntblk = 0, cntgrey = 0;
    for(auto iter : line){
        if(iter == 0){
            cntwht++;
        } else if(iter == 1){
            cntblk++;
        } else if(iter == 2){
            cntgrey++;
        }
    }

    cout << cntwht << " " << cntblk << " " << cntgrey << endl;
}