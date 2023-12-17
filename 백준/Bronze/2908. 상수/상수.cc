#include <iostream>
#include <string>
using namespace std;

void change(string &k){
    int len = k.length();
    for(int i = 0; i <= (len-1)/2; i++){
        char c = k[i];
        k[i] = k[len-1-i];
        k[len-1-i] = c;
    }
}

int main() {
    ios_base::sync_with_stdio(0);

    int a, b;
    cin >> a >> b;
    string fst = to_string(a);
    string sec = to_string(b);
    change(fst);
    change(sec);
    int a2 = stoi(fst);
    int b2 = stoi(sec);
    
    int c = a2 > b2 ? a2 : b2;
    cout << c;
    
    return 0;
}