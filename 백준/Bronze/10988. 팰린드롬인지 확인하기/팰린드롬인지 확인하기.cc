#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    int len = str.length();
    for(int i = 0; i <= (len-1)/2; i++){
        if(str[i]!=str[len-1-i]){
            cout << "0";
            return 0;
        } 
    }
    cout << "1";
    return 0;
}