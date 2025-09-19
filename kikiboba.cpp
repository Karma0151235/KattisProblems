#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int b = 0, k = 0;
    for (int i = 0, n = s.length(); i < n; i++){
        if (s[i] == 'b') b++;
        if (s[i] == 'k') k++;
    }
    if (b > k) cout << "boba";
    else if (b < k) cout << "kiki";
    else if (b == k && b != 0) cout << "boki";
    else cout << "none";
}