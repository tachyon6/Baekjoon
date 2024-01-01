#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
        vector<int> arr(n), brr(n);
        unordered_map <int, int> mp;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        brr[i] = arr[i];
    }
    sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    for(int i = 0; i <arr.size(); i++){
        mp[arr[i]] = i;
    }
    for(int i = 0; i < n; i++) {
        cout << mp[brr[i]] << " ";
    }

    return 0;
}