#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int i = 0;
    int n = s.length();
    while (i < n){
        if (s[i] == 'a') break;
        i++;
    }
    while (i < n){
        cout << s[i];
        i++;
    }
}