#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int fact = 1;
        while (n > 0){
            fact *= n;
            n--;
        }
        string d = to_string(fact);
        cout << d[d.length() - 1] << '\n';
    }
}