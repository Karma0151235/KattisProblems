#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; getline(cin, s);
    int ct = 0;
    for (int i = 0, n = s.length(); i < n; i++){
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||  s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') ct++;
    }
    cout << ct;
}