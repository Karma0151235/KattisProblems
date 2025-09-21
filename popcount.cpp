#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int ct = 0;
    for (int i = 0, n = s.length(); i < n; i++){
        if (s[i] == '1') ct++;
    }
    cout << ct;
}