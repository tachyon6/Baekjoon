#include <iostream>
using namespace std;

float gradeChanger(string c){
    if(c=="A+") return 4.5;
    if(c=="A0") return 4;
    if(c=="B+") return 3.5;
    if(c=="B0") return 3;
    if(c=="C+") return 2.5;
    if(c=="C0") return 2;
    if(c=="D+") return 1.5;
    if(c=="D0") return 1;
    if(c=="F") return 0;
}

int main() {
   string sub, grade;
   float credit;
   float allCredit = 0;
   float allGrade = 0;

   for(int i=0; i<20; i++){
    cin >> sub >> credit >> grade;
    if(grade!="P"){
        allCredit += credit;
        allGrade += credit*gradeChanger(grade);
    } 
   }
   float result = allGrade/allCredit;
   cout << result;
    return 0;
}