#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; getline(cin, s);
    string ans = "";
    ans += s[0];
    for (int i = 1, n = s.length(); i < n; i++){
        if (s[i] == s[i - 1]) continue;
        else ans += s[i];
    }
    cout << ans;
}