#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    string s;
    queue<char> que;
    stack<char> st;
    bool isWord = true;
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '<'){
            isWord = false;
        } else if(s[i-1] == '>'){
            isWord = true;
        }

        if(isWord && s[i] != ' ') st.push(s[i]);
        else if(!isWord) que.push(s[i]);

        if(s[i] == ' ' && isWord){
            while(!st.empty()){
                que.push(st.top());
                st.pop();
            }
            que.push(' ');
        } else if((i == s.length()-1 || s[i+1] == '<') && isWord){
            while(!st.empty()){
                que.push(st.top());
                st.pop();
            }
        }
    }
    while(!que.empty()){
        cout << que.front();
        que.pop();
    }
    return 0;
}