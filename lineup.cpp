#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<string> names (n);
    bool inc = true, dec = true;
    for (int i = 0; i < n; i++) cin >> names[i];
    for (int i = 1; i < n; i++){
        if (names[i] > names[i - 1]) dec = false;
        if (names[i] < names[i - 1]) inc = false;
    }
    if (inc) cout << "INCREASING";
    else if (dec) cout << "DECREASING";
    else cout << "NEITHER";
}