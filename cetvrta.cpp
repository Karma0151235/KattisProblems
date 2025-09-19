#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;
    if (a == c) cout << e;
    else if (a == e) cout << c;
    else if (c == e) cout << a;
    cout << " ";
    if (b == d) cout << f;
    else if (b == f) cout << d;
    else if (d == f) cout << b;
}