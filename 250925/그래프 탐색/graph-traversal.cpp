#include <iostream>

using namespace std;

int n, m;
int from, to;
int graph[10001][10001] ={0, };
bool visited[10001] = {false, };

int count = 0;
int dfs(int from){
    for(int i = 1; i <= n; i++){
        if(graph[from][i] == 1 && !visited[i]){
            visited[i] = true;
            count++;
            dfs(i);
        }
    }
    return count;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> from >> to;
        graph[from][to] = graph[to][from] = 1;
    }

    // Please write your code here.
    visited[1] = true;
    cout << dfs(1) << endl;

    return 0;
}
