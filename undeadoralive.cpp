#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; getline(cin, s);
    int hflag = 0, sflag = 0;
    for (int i = 0, n = s.length(); i < n-1; i++){
        if ((s[i] == ':') && (s[i + 1] == ')')) hflag = 1;
        if ((s[i] == ':') && (s[i + 1] == '(')) sflag = 1;
    }
    if ((hflag == 1) && (sflag == 1)) cout << "double agent";
    else if (hflag == 1) cout << "alive";
    else if (sflag == 1) cout << "undead";
    else cout << "machine";
}