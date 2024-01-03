#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    stack<int> st;
    int n; 
    cin >> n;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if(s == "push") {
            int x;
            cin >> x;
            st.push(x);
        } else if(s == "pop") {
            if(!st.empty()) cout << st.top() << '\n', st.pop();
            else cout << -1 << '\n';
        } else if(s == "top") {
            if(!st.empty()) cout << st.top() << '\n';
            else cout << -1 << '\n';
        } else if(s == "size") {
            cout << st.size() << '\n';
        } else if(s == "empty") {
            cout << st.empty() << '\n';
        }
    }
    return 0;
}