#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<string> names;
    vector<int> fun;
    for (int i = 0; i < n; i++){
        string s; cin >> s;
        int a; cin >> a;
        names.push_back(s);
        fun.push_back(a);
    }
    auto mx = find(fun.begin(), fun.end(), *max_element(fun.begin(), fun.end()));
    cout << names[mx - fun.begin()];
}