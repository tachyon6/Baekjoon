#include <iostream>
using namespace std;

int main() {
    int n, k, arr[1000];
    cin >> n >> k;
    cin >> arr[0];
    for(int i = 1; i < n; i++){
        int loc = i-1;
        cin >> arr[i];
        int temp = arr[i];
        while(loc >=0 && temp > arr[loc]){
            arr[loc+1] = arr[loc];
            loc--;
        }
        arr[loc+1] = temp;
    }
    cout << arr[k-1];
    return 0;
}