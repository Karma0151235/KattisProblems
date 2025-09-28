#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    set<string> checks; int word = 0;
    while (cin >> s){
        word++;
        checks.insert(s);
    }
    if (word == checks.size()) cout << "yes";
    else cout << "no";
}