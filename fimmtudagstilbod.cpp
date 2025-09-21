#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    if (n <= 2020) cout << 1000;
    else cout << 1000 + ((n - 2020)*100);
}