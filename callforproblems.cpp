#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int ct = 0; 
    for (int i = 0; i < n; i++){
        int a; cin >> a;
        if (a % 2 != 0) ct++;
    }
    cout << ct;
}