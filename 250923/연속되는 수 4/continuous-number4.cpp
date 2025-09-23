#include <iostream>
#include <vector>

using namespace std;


int main() {
    int n, a;
    cin >> n;

    vector<int> list;
    while(n--){
        cin >> a;
        list.push_back(a);
    }

    int count, max_count = 0;
    for(int i = 0; i < list.size(); i++){
        if(i == 0 || list[i - 1] >= list[i]){
            count = 1;
        } else{
            count++;
        }
        if(count > max_count){
            max_count = count;
        }
    }

    cout << max_count;
    

    return 0;
}