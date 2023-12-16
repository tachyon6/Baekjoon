#include <iostream>

using namespace std;

int main() {
    int n, x;
    bool first = true;
    cin >> n >> x;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]<x) {
            if(first) {
                cout << arr[i];
                first = false;
            }
            else cout << " " << arr[i];
        }
    }
    return 0;
}
