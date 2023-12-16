#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    int a;
    int count = 0;
    int arr[42]={0,};
    for(int i=0; i<10; i++){
        cin >> a;
        a = a%42;
        arr[a] = 1;
    }
    for(int i=0; i<42; i++){
        count += arr[i];
    }

    cout << count;
    return 0;
}