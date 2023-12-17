#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    int len = str.length();
    int count = 0;
    for(int i = len-1; i >= 0; i--){
        if(str[i]=='='){
            if(str[i-1]=='c' || str[i-1]=='s'){
                str.pop_back();
                str.pop_back();
                i--;
                count += 1;
            } else if(str[i-1]=='z'){
                if(str[i-2]=='d'){
                    str.pop_back();
                    str.pop_back();
                    str.pop_back();
                    i -= 2;
                    count += 1;
                } else{
                    str.pop_back();
                    str.pop_back();
                    i--;
                    count += 1;
                }
            }
        } else if(str[i]=='-'){
            if(str[i-1]=='c' || str[i-1=='d']){
                str.pop_back();
                str.pop_back();
                i--;
                count += 1;
            }
        } else if(str[i]=='j'){
            if(str[i-1]=='l'||str[i-1]=='n'){
                str.pop_back();
                str.pop_back();
                i--;
                count += 1;
            } else {
                str.pop_back();
                count += 1;
            }
        } else {
            str.pop_back();
            count += 1;
        }
    }
    cout << count;
    return 0;
}