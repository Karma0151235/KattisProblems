#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int m = 3, diff = 2;
    for (int i = 1; i < n; i++){
        m += diff;
        diff *= 2;
    }
    int ans = pow(m, 2);
    cout << ans;
}