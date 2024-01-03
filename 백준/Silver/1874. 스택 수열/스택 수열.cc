#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int n, a, prev = 0, k = 0;
    string ans = "";
    cin >> n;
    stack<int> st;
    for(int i = 0; i < n; i++){
        cin >> a;
        while(a > prev){
            st.push(++k);
            ans += "+\n";
            prev = k;
            if(a == prev){
                st.pop();
                ans += "-\n";
                break;
            }
        }
        while(a < prev){
            if(st.top() != a){
                cout << "NO\n";
                return 0;
            }
            st.pop();
            ans += "-\n";
            prev = a;
        }
    }
    cout << ans;
    return 0;
}