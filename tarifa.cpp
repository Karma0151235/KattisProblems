#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, n; cin >> x >> n;
    int total = x * n;
    int used = 0;
    for (int i = 0; i < n; i++){
        int a; cin >> a;
        used += a;
    }
    cout << total - used + x;
}