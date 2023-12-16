#include <iostream>

using namespace std;

int main() {
    int H, M, sum1, sum2, H2, M2;
    cin >> H >> M;
    sum1 = H*60 + M;
    if(sum1 <45) sum2 = sum1-45+24*60;
    else sum2 = sum1 - 45;
    H2 = sum2/60;
    M2 = sum2%60;
    cout << H2 << " "<< M2;
    return 0;
}
