#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int m, n;
    int arr[10000];
    int k = 0, sum = 0;
    cin >> m >> n;
    for(int a = m; a < n+1; a++){
        int sq = floor(sqrt(a));
        bool isPrime = true;
        if(a==1) isPrime = false;
        else {
            for(int j = 2; j <= sq; j++){
                if(a%j==0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if(isPrime) {
            arr[k] = a;
            sum += a;
            k++;
        }
    }
    if(sum==0) cout << -1;
    else cout << sum << endl << arr[0];
    return 0;
}