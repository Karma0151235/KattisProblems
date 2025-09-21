#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; getline(cin, s);
    string ans;
    for (int i = 0, n = s.length(); i < n; i++){
        if (s[i] != s[i + 1]){
            ans.push_back(s[i]);
        }
    }
    cout << ans;
}