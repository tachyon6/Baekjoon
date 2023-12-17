#include <iostream>
using namespace std;

int main() {
    string str;
    int arr[30] = {0,};
    int count = 0;
    cin >> str;
    int len = str.length();
    for(int i = 0; i < len; i++){
        int a = str[i]%32;
        arr[a] += 1;
    }
    if(len == 1){
        int a = str[0]%32;
        char c = a + 64;
        cout << c;
        return 0;
    }
    while(count != 1){
        count = 0;
        for(int i = 0; i < 30; i++){
            arr[i]--;
        }
        for(int i = 0; i < 30; i++){
            if(arr[i]>0) count++;
        }
        if(count==0){
            cout << "?";
            return 0;
        } 
    }
    for(int i = 0; i < 30; i++){
                if(arr[i]>=1){
                    char c = i + 64;
                    cout << c;
                    return 0;
                }
            }
}