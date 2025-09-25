#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;
int grid[25][25];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
bool visited[25][25] = {false, };
int cnt = 1;
int village = 0;
vector<int> people;

bool inRange(int x, int y){
    return x >= 0 && x < n && y >= 0 && y < n;
}

bool canGo(int x, int y){
    if(grid[x][y] == 1 && inRange(x, y)){
        return true;
    } else{
        return false;
    }
}

// 마을 하나의 사람 수를 구함
int dfs(int x, int y){
    for(int i = 0; i < 4; i++){
        int new_x = x + dx[i];
        int new_y = y + dy[i];
        if(!visited[new_x][new_y] && canGo(new_x, new_y)){
            visited[new_x][new_y] = true;
            cnt++;
            dfs(new_x, new_y);
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

    // 마을의 수를 구함
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(!visited[i][j] && canGo(i, j)){
                visited[i][j] = true;
                people.push_back(dfs(i, j));
                village++;
                cnt = 1;
            }
        }
    }

    cout << village << "\n";
    sort(people.begin(), people.end());

    for(auto iter : people){
        cout << iter << "\n";
    }

    return 0;
}
