#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int n, k;
    stack<int> st, tmp;
    cin >> n >> k;
    for(int i = n; i >= 1; i--){
        st.push(i);
    }
    cout << '<';
    int order = 0;
    while(!st.empty()){
        order += k;
        order %= st.size();
         if(order == 0) order = st.size();
        for(int j = 0; j < order; j++){
            tmp.push(st.top());
            st.pop();
        }
        if(st.empty() && tmp.size()==1) cout << tmp.top();
        else cout << tmp.top() << ", ";
        tmp.pop();
        while(!tmp.empty()){
            st.push(tmp.top());
            tmp.pop();
        }
        order--;
    }
    cout << '>';

    return 0;
}