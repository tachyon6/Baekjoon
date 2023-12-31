#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, arr[10], i = 0;
    cin >> n;
    while(n != 0){
        arr[i]=n%10;
        n/=10;
        i++;
    }
    i--;
    sort(arr, arr+i+1);
    for(int j = i; j >= 0; j--){
        cout << arr[j];
    }
    return 0;
}