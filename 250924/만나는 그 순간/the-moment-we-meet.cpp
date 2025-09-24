#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m, t;
    char d;
    cin >> n >> m;

    int a_pos = 0, b_pos = 0;
    vector<int> a, b;
    while(n--){
        cin >> d >> t;
        while(t--){
            if(d == 'R'){
                a.push_back(++a_pos);
            } else{
                a.push_back(--a_pos);
            } 
        }
    }

    while(m--){
        cin >> d >> t;
        while(t--){
            if(d == 'R'){
                b.push_back(++b_pos);
            } else b.push_back(--b_pos);
        }
    }

    int result = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == b[i]){
            result = i + 1;
            break;
        }
    }

    if(result == 0){
        cout << "-1\n";
    } else cout << result << "\n";
  
}