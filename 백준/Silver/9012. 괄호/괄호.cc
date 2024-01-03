#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        bool isVPS = true;
        stack<int> st;
        string s;
        cin >> s;
        for(int j = 0; j < s.length(); j++){
            if(s[j] == '('){
                st.push(1);
            }else if(s[j] == ')'){  
                if(st.empty()){
                    isVPS = false;
                    break;
                }else{
                    st.pop();
                }
            }
        }
        if(!st.empty()){
            isVPS = false;
        }
        if(isVPS){
            cout << "YES" << '\n';
        }else{
            cout << "NO" << '\n';
        }
    }
    return 0;
}