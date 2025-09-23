#include <iostream>
#include <vector>

using namespace std;


int main() {
    int n, size;
    char dir;
    cin >> n;

    int pos = 1000;
    vector<int> line(2001, 0);
    while(n--){
        cin >> size >> dir;
        if(dir == 'L'){
            for(int i = pos - size; i < pos; i++){
                line[i]++;
            }
            pos -= size;
        } else {
            for(int i = pos; i < pos + size; i++){
                line[i]++;
            }
            pos += size;
        }
    }

    int cnt = 0;
    for(auto iter : line){
        if(iter > 1){
            cnt++;
        }
    }

    cout << cnt << endl;
}