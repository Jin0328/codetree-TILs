#include <iostream>
#include <queue>
#include <utility>
#include <cstring>

using namespace std;

int n, k;
int grid[100][100];
int r[10000], c[10000];
bool visited[100][100] = {false, };
int answer[100][100]  = {0, };
queue<pair<int, int>> q;
int cnt = 0;

bool canGo(int x, int y){
    return !visited[x][y] && !grid[x][y] && x >= 0 && x < n && y >= 0 && y <n;
}


void Push(int x, int y){
    answer[x][y] = cnt++;
    visited[x][y] = true;
    q.push(make_pair(x, y));
}

void bfs(){
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    while(!q.empty()){
        pair<int, int> now = q.front();
        q.pop();

        int nx = now.first;
        int ny = now.second;

        for(int i = 0; i < 4; i++){
            int new_x = nx + dx[i];
            int new_y = ny + dy[i];

            if(canGo(new_x, new_y)){
                Push(new_x, new_y);
            }
        }
    }
}

int main() {
    cin >> n >> k;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) cin >> grid[i][j];

    for (int i = 0; i < k; i++) cin >> r[i] >> c[i];

    // Please write your code here.
    for(int i = 0; i < k; i++){
        int x = r[i] - 1; int y = c[i] - 1;
        Push(x, y);
    }
    bfs();

    cout << cnt << "\n";

    return 0;
}
