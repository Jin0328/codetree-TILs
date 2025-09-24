#include <iostream>
#include <vector>

using namespace std;

int N, M;
int v[1000], t[1000];
int v2[1000], t2[1000];

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> v[i] >> t[i];
    }

    for (int i = 0; i < M; i++) {
        cin >> v2[i] >> t2[i];
    }

    // Please write your code here.
    vector<int> a;
    vector<int> b;

    int s = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < t[i]; j++){
            s += v[i];
            a.push_back(s);
        }
    }

    // for(auto iter : a){
    //     cout << iter << " ";
    // }

    int s2 = 0;
    for(int i = 0; i < M; i++){
        for(int j = 0; j < t2[i]; j++){
            s2 += v2[i];
            b.push_back(s2);
        }
    }


    int size = a.size();
    vector<int> winning;

    for(int i = 0; i < size; i++){
        if(a[i] > b[i]){
            winning.push_back(1); // a
        } else if(a[i] < b[i]){
            winning.push_back(2); // b
        } else winning.push_back(3); // 둘 다
    }


    int cnt = 1;
    for(int i = 0; i < size; i++){
        if(i == 0) continue;
        if(winning[i - 1] != winning[i]){
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}