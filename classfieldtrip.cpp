#include<bits/stdc++.h>
using namespace std;

int main(){
    string a, b; cin >> a >> b;
    string ans = a + b;
    sort(ans.begin(), ans.end());
    cout << ans;
}