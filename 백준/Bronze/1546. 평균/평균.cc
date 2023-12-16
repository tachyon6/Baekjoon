#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    int a;
    float max, avg;
    float sum = 0;
    float arr[1000];
    cin >> a;
    for(int i=0; i<a; i++){
        cin >> arr[i];
    }
    sort(arr, arr + a);
    max = arr[a-1];
    for(int i=0; i<a; i++){
        arr[i]=arr[i]*100/max;
        sum += arr[i];
    }
    avg=sum/a;
    cout << avg;
    return 0;
}