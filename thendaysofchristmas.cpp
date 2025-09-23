#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int t = n;
    int ans1 = 0;
    while (t != 0){
        ans1 += t;
        t--;
    }
    int ans2 = 0;
    for (int i = n; i >= 1; i--){
        for (int j = 1; j <= i; j++){
            ans2 += j;
        }
    }
    cout << ans1 << '\n';
    cout << ans2 << '\n';
}