#include <iostream>

using namespace std;

int main() {
    bool end = true;
    int a, b;
	while(end == true){
        cin >> a >> b;
        if(a==0 && b==0) end =false;
        else {
            cout << a+b << endl;
        }
    }
    return 0;
}
