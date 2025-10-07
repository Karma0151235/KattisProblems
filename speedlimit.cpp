#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while (cin >> n){
        if (n == -1) break;
        int sum = 0, dt = 0, pt = 0;
        for (int i = 0; i < n; i++){
            int a, b; cin >> a >> b;
            int dt = b - pt;
            sum += (a * dt);
            pt = b;
        }
        cout << sum << " miles" << '\n';
    }
}