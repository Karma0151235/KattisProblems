#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    cout << n * 45 << " ml gin" << '\n';
    cout << n * 30 << " ml fresh lemon juice" << '\n';
    cout << n * 10 << " ml simple syrup" << '\n';
    if (n == 1) cout << n << " slice of lemon" << '\n';
    else cout << n << " slices of lemon" << '\n';
}