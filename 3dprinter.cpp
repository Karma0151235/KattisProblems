#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int ans = INT_MAX;
    for (int i = 0; i < 2*n; i++){
        int printers = 1 << i;
        int s_day = (n + printers - 1) / printers;
        int total = i + s_day;
        ans = min(ans, total);
    }
    cout << ans << '\n';
}