#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int mx = 0;
    vector<int> sums;
    set<int> values;
    vector<int> cands;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            int a = i + j;
            sums.push_back(a);
            values.insert(a);
        }
    }
    for (int i = 0, k = sums.size(); i < k; i++){
        int occ = count(sums.begin(), sums.end(), sums[i]);
        mx = max(mx, occ);
    }
    for (int val : values){
        int ct = count(sums.begin(), sums.end(), val);
        if (ct == mx) cands.push_back(val);
    }
    sort(cands.begin(), cands.end());
    for (int i : cands){
        cout << i << '\n';
    }
}