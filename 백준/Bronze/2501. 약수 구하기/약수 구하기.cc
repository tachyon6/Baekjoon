#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, k;
    int arr[10000] = {0,};
    int j = 1;
    cin >> n >> k;

    for(int i =1; i < n+1; i++){
        if(n%i==0){
            arr[j]=i;
            j++;
        }
    }
    cout << arr[k];
    return 0;
}