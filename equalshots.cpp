#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b; cin >> a >> b;
    int suma = 0, sumb = 0;
    for (int i = 0; i < a; i++){
        int x, y; cin >> x >> y;
        suma += x*y;
    }
    for (int i = 0; i < b; i++){
        int x, y; cin >> x >> y;
        sumb += x*y;
    }
    if (suma == sumb) cout << "same";
    else cout << "different";
}