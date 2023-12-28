#include <iostream>
using namespace std;

int main() {
    int n, a[1000];
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n-1; i++) {
        for(int j = i; j < n; j++) {
            if(a[i] > a[j]) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    return 0;
}