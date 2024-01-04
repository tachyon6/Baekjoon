#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    queue<char> que;
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        que.push(s[i]);
    }
    int floor = -1, count = 0, arr[50000] ={0,};
    while(!que.empty()){
        if(que.front() == '('){
            floor++;
            que.pop();
            if(que.front() == ')'){
                que.pop();
                for(int i = 0; i < floor; i++){
                    arr[i]++;
                }
                floor--;
            }
        } else{
            count += arr[floor]+1;
            arr[floor] = 0;
            que.pop();
            floor--;
        }
    }
    cout << count;
    return 0;
}