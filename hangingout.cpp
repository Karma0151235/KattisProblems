#include<bits/stdc++.h>
using namespace std;

int main(){
    int max, it; cin >> max >> it;
    int curr = 0;
    int ct = 0;
    for (int i = 0; i < it; i++){
        string a; cin >> a;
        int p; cin >> p;
        if (a == "enter"){
            if (curr + p <= max) curr += p;
            else ct++;
        } else {
            curr -= p;
        }
    }
    cout << ct;
}