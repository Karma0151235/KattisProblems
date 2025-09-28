#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; getline(cin, s);
    int flag = 0, pos = 0;
    for (int i = 3, n = s.length(); i < n; i++){
        if ((s[i - 3] == 't') && (s[i - 2] == 'r') && (s[i - 1] == 'e') && (s[i] == 'e')){
            pos = i - 3;
            flag = 1;
            break;
        }
    }
    if (flag == 1) cout << pos;
    else cout << "no trees here";
}