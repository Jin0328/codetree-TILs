#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int N, K;

int main() {
    cin >> N >> K;

    queue<int> q;
    vector<int> ans;

    for(int i = 1; i <= N; i++){
        q.push(i);
    }

    while(!q.empty()){
        for(int i = 0; i < K - 1; i++){
            q.push(q.front());
            q.pop();
        }
        ans.push_back(q.front());
        q.pop();
    }

    for(auto iter : ans){
        cout << iter << " ";
    }
    return 0;
}
