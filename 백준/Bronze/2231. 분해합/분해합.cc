#include <iostream>
#include <cmath>
using namespace std;


int main() {
    int n, dgt=1, min=1000000;
    cin >> n;
    int a = n;
    while(n/10 != 0) {
        n /= 10;
        dgt++;
    }
    for(int p = a - 9*dgt; p < a; p++) {
        int k = p;
        int dgtSum = k;
        for(int q = 0; q < dgt; q++){
            dgtSum += k%10;
            k /= 10;
        }
        if(dgtSum == a && p < min){
            min = p;
        }
    }
    if(min == 1000000) cout << 0 << endl;
    else cout << min << endl;
    return 0;
}