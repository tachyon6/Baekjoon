#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int b, a;
    string n;
    cin >> n >> b;
    int sum = 0;
    for(int i = 0; i < n.length(); i++){
        a = (int) n[i];
        if(a < 58){
            sum += (a -48)*pow(b, n.length()-1-i);
        } else if(a > 64){
            sum += (a-55)*pow(b, n.length()-1-i);
        }
    }
    cout << sum;
    return 0;
}