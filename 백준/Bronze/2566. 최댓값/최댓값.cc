#include <iostream>
using namespace std;

int main() {
   int arr[9][9];
   int max=0;
   int max_r = 1;
   int max_c = 1;
   for(int i = 0; i < 9; i++){
    for(int j = 0; j < 9; j++){
        cin >> arr[i][j];
        if(max < arr[i][j]){
            max = arr[i][j];
            max_r = i+1;
            max_c = j+1;
        }
    }
   }
    cout << max << endl << max_r << " " << max_c;
    return 0;
}