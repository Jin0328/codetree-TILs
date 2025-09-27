#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int n, m;
int a[100][100];
int nx[4] = {1, -1, 0, 0};
int ny[4] = {0, 0, -1, 1};
int answer[100][100] = {0, };
bool visited[100][100] = {false, };

queue<pair<int, int> > q;


bool inRange(int x, int y){
    return x >= 0 && x < n && y >= 0 && y < m;
}

bool canGo(int x, int y){
    if(!inRange(x, y)){
        return false;
    }
    if(!visited[x][y] && a[x][y] == 1){
        return true;
    }
    return false;
}

void Push(int x, int y){
    answer[x][y] = 1;
    visited[x][y] = true;
    q.push(make_pair(x, y));
}

void bfs(){
    while(!q.empty()){
        pair<int, int> curr_pos = q.front();
        q.pop();

        int x = curr_pos.first;
        int y = curr_pos.second;

        for(int i = 0; i < 4; i++){
            int new_x = x + nx[i];
            int new_y = y + ny[i];
            if(canGo(new_x, new_y)){
                Push(new_x, new_y);
            }
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    // Please write your code here.
    Push(0, 0);
    bfs();

    cout << answer[n-1][m-1] << "\n";
    return 0;
}
