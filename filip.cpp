#include<bits/stdc++.h>
using namespace std;

int main(){
    string a, b; cin >> a >> b;
    int flag = 0;
    if (a[2] > b[2]) {reverse(a.begin(), a.end()); flag = 1;}
    else if (b[2] > a[2]) reverse(b.begin(), b.end());
    else{
        if (stoi(a) > stoi(b)) {reverse(a.begin(), a.end()); flag = 1;}
        else reverse(b.begin(), b.end());
    }
    if (flag == 1) cout << a;
    else cout << b;
}