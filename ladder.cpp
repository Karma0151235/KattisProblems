#include<bits/stdc++.h>
using namespace std;

int main(){
    float h, v; cin >> h >> v;
    v *= (acos(-1)) / 180.0;
    cout << ceil(h / sin(v));
}