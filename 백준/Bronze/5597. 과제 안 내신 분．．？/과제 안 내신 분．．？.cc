#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    int a;
    int arr[30]={0,};
    for(int i=0; i<28; i++){
        cin >> a;
        arr[a-1]=1;
    }
    for(int i=0; i<30; i++){
        if(arr[i]==0) cout << i+1 << endl;
    }
    return 0;
}