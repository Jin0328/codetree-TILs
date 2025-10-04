#include <iostream>
#include <stack>

using namespace std;

int N;
string command[10000];
int value[10000];

int main() {
    cin >> N;
    
    stack<int> st;
    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push") {
            cin >> value[i];
            st.push(value[i]);
        } 
        if (command[i] == "size") {
            cout << st.size() << "\n";
        } 
        if (command[i] == "empty") {
            cout << st.empty() << "\n";
        }
        if (command[i] == "pop") {
            cout << st.top() << "\n";
            st.pop();
        }
        if (command[i] == "top") {
            cout << st.top() << "\n";
        }
    }

    // Please write your code here.

    return 0;
}
