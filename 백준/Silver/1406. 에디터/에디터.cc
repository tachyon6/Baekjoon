#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int n;
    string s;
    stack<char> left, right;
    cin >> s >> n;
    for(int i =0; i < s.length(); i++){
        left.push(s[i]);
    }
    for(int i = 0; i < n; i++){
        char c;
        cin >> c;
        if(c =='L' && !left.empty()){
            right.push(left.top());
            left.pop();
        } else if(c == 'D' && !right.empty()){
            left.push(right.top());
            right.pop();
        } else if(c == 'B' && !left.empty()){
           left.pop();
        } else if(c == 'P'){
            char k;
            cin >> k;
            left.push(k);
        }
    }
    while(!left.empty()){
        right.push(left.top());
        left.pop();
    }
    while(!right.empty()){
        cout << right.top();
        right.pop();
    }
    return 0;
}