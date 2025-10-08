#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    string ans = "";
    for (int i = 0, n = s.length(); i < n; i++){
        if (s[i] == '<') ans.pop_back();
        else ans += s[i];
    }
    cout << ans << '\n';
}