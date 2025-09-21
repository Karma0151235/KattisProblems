#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<string> items = {"keys", "phone", "wallet"};
    for (int i = 0; i < n; i++){
        string s; cin >> s;
        for (int j = 0, z = items.size(); j < z; j++){
            if (s == items[j]) items.erase(items.begin() + j);
        }
    }
    int l = items.size();
    if (l == 0) cout << "ready";
    else{
        for (int i = 0; i < l; i++){
            cout << items[i] << '\n';
        }
    }
}