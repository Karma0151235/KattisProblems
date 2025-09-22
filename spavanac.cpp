#include<bits/stdc++.h>
using namespace std;

int main(){
    int h, m; cin >> h >> m;
    int dm = m - 45;
    while (dm < 0){
        h -= 1;
        dm += 60;
    }
    if (h <= 0) h += 24;
    cout << h << " " << dm;
}