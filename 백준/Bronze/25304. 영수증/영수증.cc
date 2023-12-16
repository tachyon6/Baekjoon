#include <iostream>

using namespace std;

int main() {
    int sum1, n, a, b;
    int sum2 = 0;
    cin >> sum1 >> n;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        sum2 += a*b;
    }
    if(sum1 == sum2) cout << "Yes";
    else cout << "No";

    return 0;
}
