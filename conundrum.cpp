#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int n = s.length();
    string per = "";
    for (int i = 0; i < n/3; i++){
        per += "PER";
    }
    int ct = 0;
    for (int i = 0; i < n; i++){
        if (s[i] != per[i]) ct++;
    }
    cout << ct;
}