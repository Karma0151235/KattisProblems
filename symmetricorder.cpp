#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, set = 1; 
    while (cin >> t && t != 0){
        vector<string> f, s;
        for (int i = 0; i < t; i++){
            string name; cin >> name;
            if (i % 2 == 0) f.push_back(name);
            else s.push_back(name);
        }
        cout << "SET " << set << '\n';
        for (string &name : f) cout << name << '\n';
        for (int i = (int)s.size() - 1; i >= 0; i--) cout << s[i] << '\n';
        set++;
    }
}