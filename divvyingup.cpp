#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int price = 0;
    for (int i = 0; i < n; i++){
        int a; cin >> a;
        price += a;
    }
    if (price % 3 == 0) cout << "yes";
    else cout << "no";
}