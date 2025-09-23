#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    if (n % 2 != 0) cout << "still running";
    else {
        int ans = 0;
        for (int i = 0; i < n; i++){
            int a; cin >> a;
            if (i % 2 == 0) ans -= a;
            else ans += a;
        }
        cout << ans;
    }
}