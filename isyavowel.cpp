#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int ct = 0, cty = 0;
    for (int i = 0, n = s.length(); i < n; i++){
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||  s[i] == 'u') ct++;
        else if (s[i] == 'y') cty++;
    }
    cout << ct << ' ' << ct + cty;
}