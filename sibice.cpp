#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, w, h; cin >> n >> w >> h;
    float threshold = sqrt(pow(w, 2) + pow(h, 2));
    for (int i = 0; i < n; i++){
        float a; cin >> a;
        if (a <= threshold) cout << "DA";
        else cout << "NE";
        cout << '\n';
    }
}