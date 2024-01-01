#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Person {
    int age, order;
    string name;
}persons[100000];

bool cmp(const Person& p1, const Person& p2) {
    if(p1.age == p2.age) return p1.order < p2.order;
    return p1.age < p2.age;
}


int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        Person& p = persons[i];
        cin >> p.age >> p.name;
        p.order = i;
    }
    sort(persons, persons + n, cmp);
    for(int i = 0; i < n; i++){
        cout << persons[i].age << " " << persons[i].name << "\n";
    }
    return 0;
}