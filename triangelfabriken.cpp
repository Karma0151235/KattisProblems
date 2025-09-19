#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c; cin >> a >> b >> c;
    if ((a > 90) || (b > 90) || (c > 90)) cout << "Trubbig Triangel";
    else if ((a == 90) || (b == 90) || (c == 90)) cout << "Ratvinklig Triangel";
    else cout << "Spetsig Triangel";
}