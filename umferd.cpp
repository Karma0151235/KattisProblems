#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b; cin >> a >> b;
    int h = 0, d = 0;
    for (int i = 0; i < b; i++){
        string s; cin >> s;
        for (int j = 0, n = s.length(); j < n; j++){
            if (s[j] == '#') h++;
            else if (s[j] == '.') d++;
        }
    }
    float ans = d / (float)(h + d);
    cout << ans; 
}