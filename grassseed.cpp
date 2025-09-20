#include<bits/stdc++.h>
using namespace std;

int main(){
    double c; cin >> c;
    int l; cin >> l;
    double sum = 0;
    for (int i = 0; i < l; i++){
        double a, b; cin >> a >> b;
        sum += (a * b);
    }
    cout << fixed << setprecision(7) << sum * c;
}