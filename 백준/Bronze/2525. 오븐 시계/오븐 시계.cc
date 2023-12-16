#include <iostream>

using namespace std;

int main() {
    int H, M, add, sum1, sum2, H2, M2;
    cin >> H >> M >> add;
    sum1 = H*60 + M;
    sum2 = (sum1 + add)%1440;
    H2 = sum2/60;
    M2 = sum2%60;
    cout << H2 << " "<< M2;
    return 0;
}
