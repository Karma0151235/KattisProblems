#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int flag = 0;
    for (int i = 0, n = s.length(); i<n-2; i++){
        if ((s[i] == 'C') && (s[i + 1] == 'O') && (s[i + 2] == 'V')) flag = 1;
    }
    if (flag == 1) cout << "Veikur!";
    else cout << "Ekki veikur!";
}