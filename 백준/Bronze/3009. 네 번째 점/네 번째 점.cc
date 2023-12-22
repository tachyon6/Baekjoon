#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if(x2 == x3){
        swap(x1, x3);
        swap(y1, y3);
    }
    if(x1 == x3){
        swap(x2, x3);
        swap(y2, y3);
    }
    int a = y2 + y1;
    cout << x3 << " " << a-y3;
    return 0;
}