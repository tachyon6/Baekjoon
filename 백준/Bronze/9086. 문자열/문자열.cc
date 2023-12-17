#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    string s;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        int len = s.length();
        cout << s.substr(0, 1) << s.substr(len-1, 1) << endl;
    }
    return 0;
}