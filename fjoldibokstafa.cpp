#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int len = 0;
    for (int i = 0, n = s.length(); i < n; i++){
        if (isalpha(s[i])) len++;
    }
    cout << len;
}