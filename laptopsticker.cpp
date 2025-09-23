#include<bits/stdc++.h>
using namespace std;

int main(){
    int wc, hc, ws, hs; cin >> wc >> hc >> ws >> hs;
    wc -= 2; hc -= 2;
    if ((wc < ws) || (hc < hs)) cout << 0;
    else cout << 1;
}