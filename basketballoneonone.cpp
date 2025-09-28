#include<bits/stdc++.h>
using namespace std;

int main(){
    char a; int b;
    int sumA = 0, sumB = 0, flag = 0; 
    while (cin >> a >> b){
        if (a == 'A') sumA += b;
        else sumB += b;
        if (sumA >= 11 && sumA - sumB >= 2){flag = 1; break;}
        if (sumB >= 11 && sumB - sumA >= 2){flag = 2; break;}
    }
    if (flag == 1) cout << 'A';
    else cout << 'B';
}