#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    set<char> checks;
    for (int i = 0, n = s.length(); i < n; i++){
        checks.insert(s[i]);
    }
    if(checks.size() == s.length()) cout << 1;
    else cout << 0;
}