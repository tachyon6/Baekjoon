#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    int arr1[9], arr2[9];
    for(int i=0; i<9; i++){
        cin >> arr1[i];
        arr2[i] = arr1[i];
    }
    sort(arr1, arr1+9);
    cout << arr1[8] << endl;
    for(int i=0; i<9; i++){
        if(arr2[i]==arr1[8]) cout << i+1;
    }
    return 0;
}