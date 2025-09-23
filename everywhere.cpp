#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        set<string> cities;
        for (int i = 0; i < n; i++){
            string s; cin >> s;
            cities.insert(s);
        }
        cout << cities.size() << '\n';
    }
}