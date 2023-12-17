#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);

    string str;
    cin >> str;
    for (int i = 97; i < 123; i++) {
        char ch = static_cast<char>(i);
        bool checked = false;

        for (size_t j = 0; j < str.length(); j++) {
            if (str[j] == ch) {
                cout << j << " ";
                checked = true;
                break;
            }
        }

        if (!checked) cout << -1 << " ";
    }
    return 0;
}