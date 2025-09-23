#include <iostream>
#include <vector>

using namespace std;

bool compSign(int &a, int &b){
    if((a > 0 && b > 0) || (a < 0 && b < 0)){
        return true;
    } else {
        return false;
    }
}


int main() {
    int n, a;
    cin >> n;

    vector<int> list;
    while(n--){
        cin >> a;
        list.push_back(a);
    }

    int count = 0, max_count = 0;
    for(int i = 0; i < list.size(); i++){
        if(i == 0 || compSign(list[i-1], list[i]) == false){ // 부호가 다르거나 첫번째는 1로 초기화
            count = 1;
        } else {
            count++;
        }
        if(count > max_count){
            max_count = count;
        }
    }

    cout << max_count << "\n";
    return 0;
}