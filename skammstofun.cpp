#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<string> pool;
    for (int i = 0; i < n; i++){
        string a; cin >> a;
        pool.push_back(a);
    }
    for (string s: pool){
        if (s[0] >= 65 && s[0] <= 90) cout << s[0];
    }
}