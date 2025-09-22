#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int curr = 1;
    for (int i = 0, n = s.length(); i < n; i++){
        if (s[i] == 'A'){
            if (curr == 1) curr += 1;
            else if (curr == 2) curr -= 1;
            else curr = curr;
        }
        else if (s[i] == 'B'){
            if (curr == 1) curr = curr;
            else if (curr == 2) curr += 1;
            else curr -= 1;
        }
        else{
            if (curr == 1) curr += 2;
            else if (curr == 2) curr == curr;
            else curr -= 2;
        }
    }
    cout << curr;
}