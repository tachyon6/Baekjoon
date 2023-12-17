#include <iostream>
using namespace std;

int main() {
    int n;
    int count = 0;
    int arr[100];
    string str;
    cin >> n;
    for(int i; i<n; i++){
        cin >> str;
        int len = str.length();
        bool isGroup = true;
        for(int j=0; j<len; j++){
            int min, max;
            int num = 0;
            for(int k=0; k<len; k++){
                if(str[k]==str[j]){
                    arr[k]=1;
                    num++;
                } else arr[k]=0;
            }
            for(int k=0; k<len; k++){
                if(arr[k]==1){
                    min = k;
                    break;
                }
            }
            for(int k=len-1; k>=0; k--){
                if(arr[k]==1){
                    max = k;
                    break;
                }
            }
            if(num!=max-min+1){
                isGroup=false;
            } 
        }
        if(isGroup) count++;
    }
    cout << count;
    return 0;
}