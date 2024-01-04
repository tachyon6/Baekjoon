#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    stack<int> s;
    int index[n];

    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && arr[i] >= arr[s.top()]) {
            s.pop();
        }
        if (s.empty()) {
         index[i] = -1;
        } else {
         index[i] = arr[s.top()];
        }
        s.push(i);
    }

    for (int i = 0; i < n; i++) {
        cout << index[i] << " ";
    }

    return 0;
}
