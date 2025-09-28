#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;
    if (s.find("lv") != string::npos){
        cout << 0 << '\n';
        return 0;
    }
    bool hasL = s.find('l') != string::npos;
    bool hasV = s.find('v') != string::npos;

    if (hasL || hasV) {cout << 1; return 0;}
    cout << 2;
    return 0;
}