#include <iostream>
#include <cmath>
using namespace std;

int num(int n){
    if(n==1) return 3;
    else return 2*num(n-1)-1;
}

int main() {
    int n;
    cin >> n;
    int k = num(n);
    cout << k*k;
    return 0;
}