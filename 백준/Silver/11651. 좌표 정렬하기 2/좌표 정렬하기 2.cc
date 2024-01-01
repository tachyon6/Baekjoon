#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    long long arr[n][2], p[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i][0] >> arr[i][1];
        p[i] = (arr[i][1]+100000)*200001 + arr[i][0]+100000;
    }
    sort(p, p+n);
    for(int i = 0; i < n; i++){
        arr[i][0] = p[i]%200001 - 100000;
        arr[i][1] = p[i]/200001 - 100000;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i][0] << " " << arr[i][1] << "\n";
    }

    return 0;
}