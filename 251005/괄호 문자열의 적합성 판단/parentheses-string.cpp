#include <iostream>
#include <string>
#include <stack>

using namespace std;

string str;

int main() {
    cin >> str;

    // Please write your code here.
    stack<char> st;
    bool result = true;
    for(char c : str){
        if(c == '('){
            st.push(c);
        } else {
            if(st.empty()){
                result = false;
                break;
            } else {
                st.pop();
            }
        }
    }

    if(!st.empty()){
        result = false;
    }

    if(result){
        cout << "Yes\n";
    } else cout << "No\n";


    return 0;
}
