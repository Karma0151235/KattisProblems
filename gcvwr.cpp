#include<bits/stdc++.h>
using namespace std;

int main(){
    int g, t, n; cin >> g >> t >> n;
    int r = 0.9 * (g - t);
    for (int i = 0; i < n; i++){
        int a; cin >> a;
        r -= a;
    }
    cout << r;
}