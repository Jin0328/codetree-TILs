#include <iostream>
#include <algorithm>

using namespace std;

int n;
int grid[100][100];

bool visited[100][100] = {false, };

bool inRange(int x, int y){
    return x >= 0 && x < n && y >= 0 && y < n;
}

// 내부 칸의 수 세기
int dfs(int x, int y){
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    int nx, ny;
    int cnt = 1;
    for(int i = 0; i < 4; i++){
        nx = x + dx[i];
        ny = y + dy[i];

        if(inRange(nx, ny) && !visited[nx][ny]&& grid[x][y] == grid[nx][ny]){
            visited[nx][ny] = true;
            cnt += dfs(nx, ny);
        }
    }
    return cnt;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // Please write your code here.
    int block = 0, max_block = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(!visited[i][j] && inRange(i, j)){
                visited[i][j] = true;
                int result = dfs(i, j);
                max_block = max(max_block, result);
                if(result >= 4){
                    block++; // 터지게 되는 블록 수
                }
            }
        }
    }

    cout << block << " " << max_block << "\n";
    return 0;
}
