#include<bits/stdc++.h>
using namespace std;

int main(){
    float diameter, l, n; cin >> diameter >> l >> n;
    if ((n * l) <= (diameter * M_PI)) cout << "YES";
    else cout << "NO";
}