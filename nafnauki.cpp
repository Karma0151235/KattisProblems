#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int i = s.length() - 1;
    for (i; i >= 0; i--){
        if (s[i] == '.') break;
    }
    int n = s.length();
    for (i; i < n; i++){
        cout << s[i];
    }
}