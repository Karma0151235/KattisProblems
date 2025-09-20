#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    double curr = 0;
    for (int i = 0; i < k; i++){
        double a; cin >> a;
        curr += a;
    }
    cout << (curr + ((n - k) * -3)) / (float)n << " " << (curr + ((n - k) * 3)) / (float)n;
}