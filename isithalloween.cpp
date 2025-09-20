#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int d; cin >> d;
    if ((s == "OCT" && d == 31) || (s == "DEC" && d == 25)) cout << "yup";
    else cout << "nope";
}