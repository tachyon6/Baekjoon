#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    int n, a;
    string s;
    cin >> n >> s;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    stack<double> st;
    for(int i = 0; i < s.length(); i++){
        double fst, sec;
        if(s[i] == '+'){
            fst = st.top();
            st.pop();
            sec = st.top();
            st.pop();
            st.push(fst+sec);
        } else if(s[i] == '-'){
            fst = st.top();
            st.pop();
            sec = st.top();
            st.pop();
            st.push(sec-fst);
        } else if(s[i] == '*'){
            fst = st.top();
            st.pop();
            sec = st.top();
            st.pop();
            st.push(sec*fst);
        } else if(s[i] == '/'){
            fst = st.top();
            st.pop();
            sec = st.top();
            st.pop();
            double divide = sec/fst;
            st.push(divide);
        } else if(s[i] >= 'A' && s[i] <= 'Z'){
            int si = (int)s[i];
            int num = si - 65;
            st.push(v[num]);
        }
    }
    cout << fixed;
    cout.precision(2);
    cout << st.top();
    
    return 0;
}
