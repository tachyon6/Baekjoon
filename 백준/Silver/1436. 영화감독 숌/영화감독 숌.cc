#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 666; i < 3000000; i++){
        int p = i;
        int k , count = 0;
        bool isCon = true;
        while(p!=0){
            k = p%10;
            p /= 10;
            if(k == 6 && (isCon == true || count == 0)) {
                count++;
                isCon = true;
            } else if(k != 6){
                isCon = false;
                count = 0;
            } 
            if(count == 3){
                n--;
                break;
            }
        }
        if(n == 0) {
            cout << i;
            break;
        }
    }
    return 0;
}