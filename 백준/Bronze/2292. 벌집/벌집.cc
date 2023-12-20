#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 0;
    n--;
    while(n>0){
        i++;
        n -= i*6;
    }
    cout << i+1;
    return 0;
}