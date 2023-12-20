#include <iostream>
#include <cmath>
using namespace std;

int divide(int &k){
    int i = 2;
    while(k%i!=0){
        i++;
    }
    k = k/i;
    return i;
}

int main() {
    int n;
    cin >> n;
    while(n!=1){
        cout << divide(n) << endl;
    }
    return 0;
}