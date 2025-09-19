#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++){
        string s; cin >> s;
        int p = s[s.length() - 1] - '0';
        s.pop_back();
        int base = stoi(s);
        sum += pow(base, p);
    }
    cout << sum;
}