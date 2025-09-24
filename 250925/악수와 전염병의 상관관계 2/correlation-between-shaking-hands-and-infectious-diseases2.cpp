#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Handshake{
    int t, x, y;
};

bool cmp(Handshake &a, Handshake &b){
    return a.t < b.t;
}

int main() {
    int N, K, P, T;
    cin >> N >> K >> P >> T;

    vector<Handshake> list(T);
    for(int i = 0; i < T; i++){
        cin >> list[i].t >> list[i].x >> list[i].y;
    }

    sort(list.begin(), list.end(), cmp);
    
    vector<bool> infected(N + 1, false);
    vector<int> cnt(N + 1, 0);

    infected[P] = true;
    for(auto iter : list){
        int x = iter.x;
        int y = iter.y;

        if(infected[x] && !infected[y] && (cnt[x] < K)){
            infected[y] = true;
            cnt[x]++;
        }

        if(infected[y] && !infected[x] && (cnt[y] < K)){
            infected[x] = true;
            cnt[y]++;
        }
    }

    for(int i = 1; i <= N; i++){
        if(infected[i]) cout << 1;
        else cout << 0;
    }
    
    return 0;
}