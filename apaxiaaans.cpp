#include<bits/stdc++.h>
using namespace std;

int main(){
    string ans = "";
    string s; cin >> s;
    ans += s[0];
    for (int i = 1, n = s.length(); i <= n; i++){
        if (s[i] != s[i - 1]){
            ans += s[i];
        }
    }
    cout << ans;
}