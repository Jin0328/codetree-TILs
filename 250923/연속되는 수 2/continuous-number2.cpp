#include <iostream>
#include <vector>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    int a;
    vector<int> list;
    while(n--){
        cin >> a;
        list.push_back(a);
    }

    int count_max = 0;
    int count = 0;
    for(int i = 0; i < list.size(); i++){
        if(i == 0 || list[i - 1] != list[i]){
            count = 1;
        } else {
            count++;
        }
        if(count > count_max){
            count_max = count;
        }
    }

    cout << count_max << "\n";


    return 0;
}