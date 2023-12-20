#include <iostream>
#include <cmath>
using namespace std;

void change(int k){
    cout << k/25 << " ";
    k = k%25;
    cout << k/10 << " ";
    k = k%10;
    cout << k/5 << " ";
    k = k%5;
    cout << k;
}

int main() {
    int t, a;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> a;
        change(a);
        cout << endl;
    }
    return 0;
}