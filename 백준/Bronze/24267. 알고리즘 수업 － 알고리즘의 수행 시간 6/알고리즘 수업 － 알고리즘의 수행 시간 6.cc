#include <iostream>
using namespace std;


int main() {
    long long n;
    cin >> n;
    long long k =(n-1)*n*(2*n-1)/6 - (n-1)*(n)/2;
    cout << k/2 << endl << 3;
    return 0;
}