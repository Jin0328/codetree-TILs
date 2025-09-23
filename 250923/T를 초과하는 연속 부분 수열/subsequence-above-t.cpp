#include <iostream>

using namespace std;

int n, t;
int arr[1000];


int main() {
    cin >> n >> t;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 0, max_count = 0;
    for(int i = 0; i < n; i++){
        if(i == 0){
            if(arr[i] > t){
                count = 1;
            }
        } else{
            if(arr[i] > t){ // 조건 만족
                if(arr[i -1] <= t){ // 그 전에가 조건 불만족 -> 연속 X
                    count = 1;
                } else count++;
            }
        }
        if(max_count < count){
            max_count = count;
        }
    }

    cout << max_count << "\n";

    // Please write your code here.

    return 0;
}