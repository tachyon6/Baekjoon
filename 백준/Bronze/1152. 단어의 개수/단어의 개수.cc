#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);

    int count=0;
    string str;
    getline(cin, str);
    if(str.empty() || str.find_first_not_of(' ') == string::npos){
        cout << 0;
        return 0;
    }
    for(int i = 1; i < str.length()-1; i++){
        if(str[i] == ' '){
            count += 1;
        }
    }
    cout << count +1;
    return 0;
}