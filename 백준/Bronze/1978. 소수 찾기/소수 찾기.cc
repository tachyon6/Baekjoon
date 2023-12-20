#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, a;
    int count = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        int sq = floor(sqrt(a));
        bool isPrime = true;
        if(a==1) continue;
        else if(sq<2) count++;
        else {for(int j = 2; j <= sq; j++){
            if(a%j==0) isPrime = false;
        }
        if(isPrime) count++;
        }
    }
    cout << count;
    return 0;
}