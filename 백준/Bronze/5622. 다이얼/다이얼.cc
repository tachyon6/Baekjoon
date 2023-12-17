#include <iostream>
#include <string>
using namespace std;

int change(char k){
    int a = k - 65;
    if(a == 18 || a == 21) a-=1;
    if(a == 24 || a == 25) a-=2;
    return a/3 + 2; 
}

int main() {
    ios_base::sync_with_stdio(0);
    string str;
    int sum = 0;
    cin >> str;
    for(int i = 0; i < str.length(); i++){
        char a = str[i];
        sum += change(a)+1;
    }
    cout << sum;
    return 0;
}