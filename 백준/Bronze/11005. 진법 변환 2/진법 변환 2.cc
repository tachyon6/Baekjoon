#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, b;
    int i = 0;
    int arr[30] = {0,};
    cin >> n >> b;
    while(n != 0){
        int p1 = pow(b, i+1);
        int p2 = pow(b, i);
        int k = n%p1;
        arr[i] = k/p2;
        n -= k;
        i++;
    }
    for(int j = i-1; j >=0; j--){
        if(arr[j]>9){
            char ch = (char) (arr[j]+55);
            cout << ch;
        } else{
        cout << arr[j];
        }
    }
    return 0;
}