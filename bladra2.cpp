#include<bits/stdc++.h>
using namespace std;

int main(){
    int v, a, t; cin >> v >> a >> t;
    float d = (v*t) + 0.5*(a*(pow(t, 2)));
    cout << d;
}