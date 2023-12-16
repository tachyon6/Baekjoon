#include <iostream>

using namespace std;

int main() {
    int a;
    string score;
    cin >> a;
    if(a>89 && a<101) score = "A";
    else if(a>79 && a<90) score = "B";
    else if(a>69 && a<80) score = "C";
    else if(a>59 && a<70) score = "D";
    else score = "F";
    cout << score;
    return 0;
}
