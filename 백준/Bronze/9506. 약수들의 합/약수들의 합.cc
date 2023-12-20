#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    while(cin >> n){
        int arr[100000]={0,};
        int j = 1;
        int sum = 0;
        if(n==-1) break;
        for(int i =1; i < n; i++){
            if(n%i==0){
                arr[j]=i;
                j++;
                sum += i;
            }
        }
        if(sum == n){
            cout << n << " = ";
            for(int k = 1; k < j; k++){
                if(k==1) cout << arr[k];
                else cout << " + " << arr[k];
            }
            cout << endl;
        }
        else {
            cout << n << " is NOT perfect." << endl;
        }
    }
    return 0;
}