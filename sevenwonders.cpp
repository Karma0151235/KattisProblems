#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int t = 0, c = 0, g = 0;
    for (int i = 0, n = s.length(); i < n; i++){
        if (s[i] == 'T') t++;
        else if (s[i] == 'C') c++;
        else g++;
    }
    int score = 0, ct = t, cc = c, cg = g;
    while (ct > 0 && cc > 0 && cg > 0){
        ct--;
        cc--;
        cg--;
        score += 7;
    }
    cout << pow(t, 2) + pow(c, 2) + pow(g, 2) + score;
}