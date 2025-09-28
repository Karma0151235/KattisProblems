#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++){
        string p, s; cin >> p >> s;
        int v; cin >> v;
        if (s == "IN") sum += v;
        else sum -= v;
    }
    if (sum == 0) cout << "NO STRAGGLERS";
    else cout << sum;
}