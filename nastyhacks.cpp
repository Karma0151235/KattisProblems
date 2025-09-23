#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int r, e, c; cin >> r >> e >> c;
        int check = e - c;
        if (check > r) cout << "advertise";
        else if (check < r) cout << "do not advertise";
        else cout << "does not matter";
        cout << '\n';
    }
}