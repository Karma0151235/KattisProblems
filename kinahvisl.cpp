#include<bits/stdc++.h>
using namespace std;

int main(){
    string a, b; cin >> a >> b;
    int ct = 1;
    for (int i = 0, n = a.length(); i < n; i++){
        if (a[i] != b[i]) ct++;
    }
    cout << ct;
}