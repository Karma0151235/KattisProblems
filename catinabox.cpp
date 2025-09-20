#include<bits/stdc++.h>
using namespace std;

int main(){
    int h, w, l, c; cin >> h >> w >> l >> c;
    int vol = h * w * l;
    if (vol > c) cout << "SO MUCH SPACE";
    else if (vol < c) cout << "TOO TIGHT";
    else cout << "COZY";
}