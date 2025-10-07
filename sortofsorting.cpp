#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while (cin >> n && n != 0){
        vector<string> names (n);
        for (int i = 0; i < n; i++) cin >> names[i];
        stable_sort(names.begin(), names.end(),
        [](const string &a, const string &b){
            return a.substr(0, 2) < b.substr(0, 2);
        });
        for (string s : names) cout << s << '\n';
        cout << '\n';
    }
}