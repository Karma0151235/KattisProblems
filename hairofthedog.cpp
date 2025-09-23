#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<string> state (n);
    int ans = 0;
    for (int i = 0; i < n; i++) cin >> state[i];
    for (int i = 1; i < n; i++){
        if ((state[i] == "sober") && (state[i - 1] == "drunk")){
            ans++;
        }
    }
    cout << ans;
}