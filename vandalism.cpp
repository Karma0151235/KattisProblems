#include<bits/stdc++.h>
using namespace std;

int main(){
    string check = "UAPC";
    string s; cin >> s;
    for (int i = 0, n = s.length(); i < n; i++){
        check.erase(remove(check.begin(), check.end(), s[i]), check.end());
    }
    cout << check;
}