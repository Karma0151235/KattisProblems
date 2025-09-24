#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; getline(cin, s);
    map<char, string> translation = {
        {'a', "@"},
        {'b', "8"},
        {'c', "("},
        {'d', "|)"},
        {'e', "3"},
        {'f', "#"},
        {'g', "6"},
        {'h', "[-]"},
        {'i', "|"},
        {'j', "_|"},
        {'k', "|<"},
        {'l', "1"},
        {'m', "[]\\/[]"},
        {'n', "[]\\[]"},
        {'o', "0"},
        {'p', "|D"},
        {'q', "(,)"},
        {'r', "|Z"},
        {'s', "$"},
        {'t', "']['"},
        {'u', "|_|"},
        {'v', "\\/"},
        {'w', "\\/\\/"},
        {'x', "}{"},
        {'y', "`/"},
        {'z', "2"},
    };
    string ans = "";
    for (int i = 0, n = s.length(); i < n; i++){
        if (isalpha(s[i])){
            ans += translation[tolower(s[i])];
        }
        else ans += s[i];
    }
    cout << ans;
}