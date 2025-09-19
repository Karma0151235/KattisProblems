#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int change = 0;
    for (int i = 0; i < n; i++){
        string s; cin >> s;
        int a; cin >> a;
        change += a;
    }
    if (change > 0) cout << "Usch, vinst";
    else if (change < 0) cout << "Nekad";
    else cout << "Lagom";
}