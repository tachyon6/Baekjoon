#include <iostream>
using namespace std;

int main() {
    int n, m;
    int min = 64;
    cin >> n >> m;
    char arr[n][m];
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        for(int j = 0; j < m; j++){
            arr[i][j] = s[j];
        }
    }
    for(int i = 0; i <= n - 8; i++){
        for(int j = 0; j <= m - 8; j++){
            int count = 0;
            for(int k = i; k < i + 8; k++){
                for(int l = j; l < j + 8; l++){
                    if((k + l) % 2 == 0){
                        if(arr[k][l] == 'B') count++;
                    }
                    else{
                        if(arr[k][l] == 'W') count++;
                    }
                }
            }
            if(count > 32) count = 64 - count;
            if(count < min) min = count;
        }
    }
    cout << min << endl;
    return 0;
}