#include <iostream>

using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
       cin >> a >> b;
       arr[i]=a+b;
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << endl;
    }
    return 0;
}
