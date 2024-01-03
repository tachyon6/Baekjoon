#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    stack<char> st;
    int n; 
    cin >> n;
    for(int i = 0; i <= n; i++){
        string s;
        getline(cin, s);
        if(s == "") continue;
        for(int j = 0; j < s.length(); j++){
            if(s[j] == ' ' || j == s.length() - 1){
                if(j == s.length() - 1){
                    st.push(s[j]);
                }
                while(!st.empty()){
                    cout << st.top();
                    st.pop();
                }
                cout << " ";
            }
            else {
                st.push(s[j]);
            }
        }
        cout << '\n';
    }
    return 0;
}