#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    int n, a, k;
    cin >> n;
    int arr[1000000];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    cout << arr[0] << " " << arr[n-1];
    return 0;
}