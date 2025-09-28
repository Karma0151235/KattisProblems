#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    set<string> loop; vector<string> coll;
    for (int i = 0; i < n; i++){
        string n, p; cin >> n >> p;
        coll.push_back(p);
        loop.insert(p);
    }
    for (string s: loop){
        cout << s << " " << count(coll.begin(), coll.end(), s);
        cout << '\n';
    }
}