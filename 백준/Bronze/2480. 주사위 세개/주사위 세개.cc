#include <iostream>

using namespace std;

int main() {
    int a, b, c,k, sum;
    int arr[3];
    for(int i = 0; i<3; i++){
        cin >> arr[i];
    }
    for(int i =0; i<2; i++){
        for(int j=i+1; j<3; j++)
        if(arr[i]<arr[j]){
            k = arr[i];
            arr[i] = arr[j];
            arr[j] = k;
        }
    }
    a = arr[0];
    b = arr[1];
    c = arr[2];

    if(a==b && b==c) sum = 10000 + a*1000;
    else if(a==b || b==c) sum = 1000 + b*100;
    else sum = a*100;

    cout << sum;
    return 0;
}
