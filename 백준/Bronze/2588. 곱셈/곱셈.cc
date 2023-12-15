#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int fst = a * (b%10);
    int sec = a * ((b%100) /10);
    int thd = a * (b/100);

    int sum = fst + sec * 10 + thd * 100;

    cout << fst << endl << sec << endl << thd << endl << sum;
    return 0;
}