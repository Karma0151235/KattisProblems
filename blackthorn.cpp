#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int flag = 0;
    for (int i = 2, n = s.length(); i < n; i++){
        if ((s[i - 2] == 'k') && (s[i - 1] == 't') && (s[i] == 'h')) flag = 1;
    }
    if (flag == 1) cout << "yes";
    else cout << "no";
}