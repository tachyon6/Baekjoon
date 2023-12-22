#include <iostream>
using namespace std;


int main() {
    int a, b, c, i = 0;
    cin >> a >> b >> c;
    int sum = a + b + c;
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    while(2*max >= sum-i) {
        max--;
        i++;
    }
    cout << sum - i;
    return 0;
}