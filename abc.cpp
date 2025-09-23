#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    vector<int> abc (3);
    for (int i = 0; i < 3; i++) cin >> abc[i];
    sort(abc.begin(), abc.end());
    string s; cin >> s;
    for (int i = 0, n = s.length(); i < n; i++){
        if (s[i] == 'A') cout << abc[0];
        else if (s[i] == 'C') cout << abc[2];
        else cout << abc[1];
        cout << " ";
    }
}