#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    cout << s[0];
    for (int i = 1, n = s.length(); i < n; i++){
        if (s[i - 1] == '-') cout << s[i]; 
    }
}