#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t, tasks = 0; cin >> n >> t;
    for (int i = 0; i < n; i++){
        int a; cin >> a;
        if (t >= a) {t-=a; tasks++;}
        else break;
    }
    cout << tasks;
}