#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> no;
    for (int i = 0; i < n; i++){
        int a; cin >> a;
        string b; cin >> b;
        if (b == "nej") no.push_back(a);
    }
    cout << *max_element(no.begin(), no.end());
}