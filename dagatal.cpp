#include<bits/stdc++.h>
using namespace std;

int main(){
    int m; cin >> m;
    if (m == 4 || m == 6 || m == 9 || m == 11) cout << 30;
    else if (m == 2) cout << 28;
    else cout << 31;
}