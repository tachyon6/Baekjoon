#include <iostream>
using namespace std;

int main() {
    int a, b;
    while(cin >> a >> b){
        if(a==0 && b==0) break;
        else {
            if(a%b == 0) cout << "multiple" << endl;
            else if(b%a == 0) cout << "factor" << endl;
            else cout << "neither" << endl;
        }
    }
    return 0;
}