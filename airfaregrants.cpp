#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; i++) cin >> prices[i];
    int mx = *max_element(prices.begin(), prices.end());
    int p = *min_element(prices.begin(), prices.end());
    int ans = p - (0.5 * mx);
    if (ans < 0) cout << 0;
    else cout << ans;
}