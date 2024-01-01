#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    string temp = "";
    vector<pair<int, string>> arr;
    cin >> n;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        arr.push_back(make_pair(s.length(), s));
    }
    sort(arr.begin(), arr.end());

    for(int i = 0; i < n; i++){
        if(temp != arr[i].second){
        cout << arr[i].second << endl;
        }
        temp = arr[i].second;
    }

    return 0;
}