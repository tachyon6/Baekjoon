#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    int n;
    int sum = 0;
    string str;
    cin >> n >> str;
    for(int i = 0; i < n; i++){
        sum += stoi(str.substr(i, 1));
    }
    cout << sum;
    return 0;
}