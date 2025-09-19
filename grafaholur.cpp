#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, h, x, m, y; cin >> n >> h >> x >> m >> y;
    float r = x / (float)(n * h);
    float ans = y / (r * m);
    cout << ans;
}