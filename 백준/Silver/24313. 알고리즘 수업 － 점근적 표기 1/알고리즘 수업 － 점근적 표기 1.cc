#include <iostream>
using namespace std;


int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a<c) {
        if(b/(c-a) <= d) {
            cout << 1;
            return 0;
        }
        else {
            cout << 0;
            return 0;
        }
    }
    else if(c==a){
        if(b<=d) {
            cout << 1;
            return 0;
        }
        else {
            cout << 0;
            return 0;
        }
    } else{
        cout << 0;
    }
    return 0;
}