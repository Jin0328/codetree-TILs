#include <iostream>

using namespace std;

int n, m;
int grid[100][100];
int dx[2] = {1, 0};
int dy[2] = {0, 1};
bool visited[100][100] = {false, };

bool inRange(int x, int y){
    return x >= 0 && x < n && y >= 0 && y < m;
}


bool canGo(int x, int y){
    if(grid[x][y] == 1 && inRange(x, y)){
        return true;
    } else return false;
}

void dfs(int x, int y){
    for(int i = 0; i < 2; i++){
        int new_x = x + dx[i];
        int new_y = y + dy[i];
        if(!visited[new_x][new_y] && canGo(new_x, new_y)){
            visited[new_x][new_y] = true;
            dfs(new_x, new_y);
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    visited[0][0] = true;
    dfs(0, 0);

    cout << visited[n - 1][m - 1] << endl;

    return 0;
}
