#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int k, a; cin >> k >> a;
        cout << k << " ";
        int ans = 0, j = a;
        while (j > 0){
            ans += j;
            j--;
        }
        cout << ans + a << '\n';
    }
}