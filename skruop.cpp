#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int vol = 7;
    for (int i = 0; i < n; i++){
        string a, b; cin >> a >> b;
        if (b == "op!") vol++;
        else vol--;
        if (vol > 10) vol = 10;
        if (vol < 0) vol = 0;
    }
    cout << vol;
}