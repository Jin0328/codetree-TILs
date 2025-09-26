#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int N, M;
int grid[50][50];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
bool visited[51][51] = {false, };

bool inRange(int x, int y){
    return x >=0 && x < N && y >= 0 && y < M;
}


bool canGo(int x, int y, int k){ // 범위에 있고, 방문하지 않았고, 잠기지 않았다면
    if(!inRange(x, y)){
        return false;
    }
    if(!visited[x][y] && grid[x][y] > k){
        return true;
    }
    return false;
}

void dfs(int x, int y, int k){
    int count = 1;
    for(int i = 0; i < 4; i++){
        int new_x = x + dx[i];
        int new_y = y + dy[i];

        if(canGo(new_x, new_y, k)){
            visited[new_x][new_y] = true;
            dfs(new_x, new_y, k);
        }
    }
}

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> grid[i][j];
        }
    }

    int max_village = 0, answer = 0;
    for(int k = 1; k < 100; k++){
        memset(visited, false, sizeof(visited));
        int count = 0;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                if(canGo(i, j, k)){
                    visited[i][j] = true;
                    dfs(i, j, k);
                    count++;
                }
            }
        }
        if(count > max_village){
            max_village = count;
            answer = k;
        }
    }

    cout << answer << " " << max_village << endl;

    return 0;
}