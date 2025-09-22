#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        string a, b; cin >> a >> b;
        cout << a << '\n' << b << '\n';
        for (int k = 0, j = a.length(); k < j; k++){
            if (a[k] != b[k]) cout << "*";
            else cout << ".";
        }
        cout << '\n';
    }
}