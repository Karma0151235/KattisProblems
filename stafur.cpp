#include<bits/stdc++.h>
using namespace std;

int main(){
    char c; cin >> c;
    set<char> vowels = {'A', 'E', 'I', 'O', 'U'};
    if (vowels.count(c) > 0) cout << "Jebb";
    else if (c == 'Y') cout << "Kannski";
    else cout << "Neibb";
}