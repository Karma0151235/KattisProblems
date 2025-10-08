#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        float b, p; cin >> b >> p;
        float hr = (60 * b) / p, diff = hr / b;
        cout << setprecision(4) << fixed << hr - diff << " " << hr << " " << hr + diff << '\n';
    }
}