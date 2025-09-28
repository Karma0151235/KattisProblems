#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; getline(cin, s);
    vector<int> pos;
    for (int i = 1, n = s.length(); i < n; i++){
        if ((i - 2 >= 0) && ((s[i - 2] == ':' || s[i - 2] == ';') && (s[i - 1] == '-') && (s[i] == ')'))) pos.push_back(i-2);
        else if (((s[i - 1] == ':' || s[i - 1] == ';')) && (s[i] == ')')) pos.push_back(i-1);
    }
    for (int n : pos){
        cout << n << '\n';
    }
}