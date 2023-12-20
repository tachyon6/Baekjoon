#include <iostream>
#include<math.h>
using namespace std;

int main() {
    double a, b, v;
    cin >> a >> b >> v;
    int k = ceil((v-a)/(a-b));
    cout << k+1;
    return 0;
}