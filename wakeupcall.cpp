#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int suma = 0, sumb = 0;
    for (int i = 0; i < n; i++){
        int a; cin >> a;
        suma += a;
    }
    for (int i = 0; i < m; i++){
        int b; cin >> b;
        sumb += b;
    }
    if (suma > sumb) cout << "Button 1";
    else if (sumb > suma) cout << "Button 2";
    else cout << "Oh no";
}