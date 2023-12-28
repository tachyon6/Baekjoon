#include <iostream>
using namespace std;

int main() {
    int a[5];
    cin >> a[0];
    int sum = a[0];
    for(int i = 1; i < 5; i++) {
       int loc = i-1;
         cin >> a[i];
         sum += a[i];
         int temp = a[i];
         while(loc >= 0 && temp < a[loc]){
            a[loc+1] = a[loc];
            loc--;
         }
         a[loc+1]=temp;
    }
    cout << sum/5 << endl << a[2];
    return 0;
}