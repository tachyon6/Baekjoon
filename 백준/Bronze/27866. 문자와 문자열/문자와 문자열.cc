#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    string s;
    int i;
    cin >> s >> i;
    string x = s.substr(i-1, 1);
    cout << x;
    return 0;
}