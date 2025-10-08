#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++){
        string s; getline(cin, s);
        set<char> alphabets;
        s.erase(remove_if(s.begin(), s.end(), ::isspace), s.end());
        for (int i = 0, j = s.length(); i < j; i++){
            if (isalpha(s[i])) alphabets.insert(tolower(s[i]));
        }
        if (alphabets.size() == 26) cout << "pangram";
        else{
            cout << "missing ";
            for (char c = 'a'; c <= 'z'; c++){
                if (!alphabets.count(c)) cout << c;
            }
        }
        cout << '\n';
    }
}