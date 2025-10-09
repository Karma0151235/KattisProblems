#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b; cin >> a >> b;
    int diff = abs(a - b);
    if (b > a){
        if (diff == 1) cout << "Dr. Chaz will have " << diff << " piece of chicken left over!";
        else cout << "Dr. Chaz will have " << diff << " pieces of chicken left over!";
    } else {
        if (diff == 1) cout << "Dr. Chaz needs " << diff << " more piece of chicken!";
        else cout << "Dr. Chaz needs " << diff << " more pieces of chicken!";
    }

}