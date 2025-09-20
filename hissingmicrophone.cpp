#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int flag = 0;
    for (int i = 0, n = s.length(); i < n - 1; i++){
        if (s[i] == s[i + 1] && s[i] == 's') flag = 1;
    }
    if (flag == 1) cout << "hiss";
    else cout << "no hiss";
}