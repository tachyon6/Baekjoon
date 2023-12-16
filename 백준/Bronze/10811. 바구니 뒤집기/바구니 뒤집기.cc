#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    int n, m, a, b, k;
    int arr[100];
    cin >> n >> m;
    for(int i=0; i<n; i++){
        arr[i]=i+1;
    }
    for(int i=0; i<m; i++){
        cin >> a >> b;
        for(int i=a-1; i<(a+b)/2; i++){
            k = arr[i];
            arr[i]=arr[a+b-2-i];
            arr[a+b-2-i]=k;
        }
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}