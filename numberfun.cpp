#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int a, b, c; cin >> a >> b >> c;
        if ((abs(a + b) == c) || (abs(a - b) == c) || (a * b == c) || (a / (float)b == (float)c) || (b / (float)a == (float)c)) cout << "Possible";
        else cout << "Impossible";
        cout << '\n';
    }
}