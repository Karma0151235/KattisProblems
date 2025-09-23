#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, p, s; cin >> n >> p >> s;
    for (int i = 0; i < s; i++){
        int m; cin >> m;
        int flag = 0;
        for (int j = 0; j < m; j++){
            int a; cin >> a;
            if (a == p) flag = 1;
        }
        if (flag == 1) cout << "KEEP";
        else cout << "REMOVE";
        cout << '\n';
    }
}