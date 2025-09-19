#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c; cin >> a >> b >> c;
    int d = min(min(a, b), c);
    if (d == a) cout << "Monnei";
    else if (d == b) cout << "Fjee";
    else cout << "Dolladollabilljoll";
    cout << '\n';
}