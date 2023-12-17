#include <iostream>
using namespace std;

int main() {
    int arr1[6] = {1, 1, 2, 2, 2, 8};
    int arr2[6];

    int a;

    for(int i=0; i<6; i++){
        cin >> a;
        cout << arr1[i]-a << " ";
    }
    return 0;
}