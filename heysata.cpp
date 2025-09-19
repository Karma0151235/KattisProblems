#include<bits/stdc++.h>
using namespace std;

int main(){
    int a; cin >> a;
    char c; cin >> c;
    string s; cin >> s;
    int flag = 0;
    for (int i = 0; i < a; i++){
        if (s[i] == c) flag = 1;
    }
    if (flag == 1) cout << "Unnar fann hana!";
    else cout << "Unnar fann hana ekki!";
}