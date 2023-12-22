#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int p = x-a;
    int q = y-b;
    int arr[4] = {a, b, p, q};
    sort(arr, arr+4);
    cout << arr[0] << endl;
    return 0;
}