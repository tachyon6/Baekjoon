#include <iostream>

using namespace std;

int main() {
    int n, k;
    int count =0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cin >> k;
    for(int i=0; i<n; i++){
        if(arr[i]==k) count += 1;
    }
    cout << count;
    return 0;
}
