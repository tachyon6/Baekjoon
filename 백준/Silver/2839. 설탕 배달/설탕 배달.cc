#include <iostream>
using namespace std;

int main() {
    int n, min = 3000;
    cin >> n;
    int a = n / 5;
    int b = n / 3;
    for(int i = 0; i <= a; i++){
        for(int j = 0; j <= b; j++){
            if(i*5+j*3 == n && i+j < min){
                min = i+j;
            }
        }
    }
    if(min == 3000) cout << -1;
    else cout << min;
    return 0;
}