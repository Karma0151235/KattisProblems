#include<bits/stdc++.h>
using namespace std;

int main(){
    int m; cin >> m;
    int sum = 0;
    for (int i = 0; i < m; i++){
        int a; cin >> a;
        sum += a;
    }
    cout << sum / m;
}