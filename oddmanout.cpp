#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    for (int i = 1; i <= t; i++){
        int n; cin >> n;
        unordered_map<int, int> freq;
        vector<int> g(n);
        for (int i = 0; i < n; i++){
            cin >> g[i];
            freq[g[i]]++;
        }
        cout << "Case #" << i << ": ";
        for (auto &[val, count] : freq){
            if (count % 2 == 1) cout << val;
        }
        cout << '\n';
    }
}