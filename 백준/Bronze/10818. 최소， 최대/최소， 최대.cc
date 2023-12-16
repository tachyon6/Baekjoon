#include <iostream>

using namespace std;

int main() {
    int n, a, k;
    cin >> n;
    int arr[1000000];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n-1; i++){
        if(arr[i]<arr[i+1]){
            k = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = k;
        }
    }
    cout << arr[n-1]<<" ";

    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            k = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = k;
        }
    }
    cout << arr[n-1];
    return 0;
}
