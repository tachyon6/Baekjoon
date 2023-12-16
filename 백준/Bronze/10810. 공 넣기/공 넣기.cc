#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    int n, m, a, b, c;
    int arr[100] = {0,};
    cin >> n >> m;
    for(int i=0; i<m; i++){
        cin >> a >> b >> c;
        for(int j=a-1; j<b; j++){
            arr[j]=c;
        }
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}