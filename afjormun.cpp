#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n; 
    cin.ignore();
    for (int i = 0; i < n; i++){
        string s; getline(cin, s);
        for (int j = 0, k = s.length(); j < k; j++){
            if (j == 0) s[j] = toupper(s[j]);
            else s[j] = tolower(s[j]);
        }
        cout << s;
        cout << '\n';
    }
}