#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    cin.ignore();
    string s; getline(cin, s);
    map<char, char> key = {
        {'a', 'q'},
        {'b', 'w'},
        {'c', 'e'},
        {'d', 'r'},
        {'e', 't'},
        {'f', 'y'},
        {'g', 'u'},
        {'h', 'i'},
        {'i', 'o'},
        {'j', 'p'},
        {'k', 'a'},
        {'l', 's'},
        {'m', 'd'},
        {'n', 'f'},
        {'o', 'g'},
        {'p', 'h'},
        {'q', 'j'},
        {'r', 'k'},
        {'s', 'l'},
        {'t', 'z'},
        {'u', 'x'},
        {'v', 'c'},
        {'w', 'v'},
        {'x', 'b'},
        {'y', 'n'},
        {'z', 'm'},
    };
    for (int i = 0; i < n; i++){
        if (isalpha(s[i])) cout << key[s[i]];
        else cout << s[i];
    }
}