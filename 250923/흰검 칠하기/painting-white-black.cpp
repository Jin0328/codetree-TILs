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
    vector<bool> is_visited_w(INF * 2, false);

    while(n--){
        cin >> size >> dir;
        // 흰색으로 색칠
        // 필요한 것 : 인덱스, 색깔, 칠해진 수
        if(dir == 'L'){
            for(int i = pos - size; i < pos; i++){
                if(is_visited[i] == true){
                    line[i] = 2; // 회색
                } else{
                    line[i] = 0; // 흰색
                    is_visited[i] = true;
                }
                cout << i << " " << line[i] << endl;
                
            }
            pos -= size;
        } else {
            for(int i = pos; i < pos + size; i++){
                if(is_visited[i] == true){
                    line[i] = 2; // 회색
                } else{
                    line[i] = 1; // 검은색
                    is_visited[i] = true;
                }
                cout << i << " " << line[i] << endl;
            }
            pos += size;
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