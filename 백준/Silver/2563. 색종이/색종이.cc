#include <iostream>
using namespace std;

int main() {
    int arr[101][101] = {0,};
    int n, a, b;
    cin >> n;
    for(int i = 0; i < n; i++){
         cin >> a >> b;
         for(int j = a+1; j < a+11; j++){
            for(int k = b+1; k < b+11; k++){
                arr[j][k] = 1;
            }
         }
    }
    int sum = 0;
    for(int i = 0; i < 101; i++){
        for(int j = 0; j < 101; j++){
            sum += arr[i][j];
        }
    }
    cout << sum;
    return 0;
}