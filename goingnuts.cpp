#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    bitset<20> binaryRepresentation(n);
    string binary = binaryRepresentation.to_string();
    int ans = 0;
    for (int i = 0, n = binary.length(); i < n; i++){
        if (binary[i] == '1') ans++;
    }
    cout << ans;
}