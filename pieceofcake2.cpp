#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, h, v; cin >> n >> h >> v;
    int a = 0, b = 0, c = 0, d = 0;
    a = h * v; b = h * (n - v); c = (n - h) * (n - v); d = (n - h) * v;
    cout << max(max(max(a, b), c), d) * 4;
}