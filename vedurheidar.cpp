#include<bits/stdc++.h>
using namespace std;

int main(){
    int v, n; cin >> v >> n;
    for (int i = 0; i < n; i++){
        string s; cin >> s;
        int k; cin >> k;
        if (k <= v) cout << s << " " << "lokud";
        else cout << s << " " << "opin";
        cout << '\n';
    }
}