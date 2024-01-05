#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int n, f[1000001] ={0,};
    cin >> n;
    int arr[n], ngf[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        f[arr[i]]++;
    }
    stack<int> st;
    for(int i = n-1; i >=0; i--){
        while(!st.empty() && f[arr[i]] >= f[arr[st.top()]]){
            st.pop();
        }
        if(st.empty()){
            ngf[i] = -1;
        } else{
            ngf[i] = arr[st.top()];
        }
        st.push(i);
    }
    for(int i =0; i<n; i++){
        cout << ngf[i] << " ";
    }
    return 0;
}
