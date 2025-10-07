#include<bits/stdc++.h>
using namespace std;

int main(){
    int l, d, x; cin >> l >> d >> x;
    vector<int> cands;
    for (int i = l; i <= d; i++){
        string s = to_string(i);
        int sum = 0;
        for (char c : s){
            sum += (c - '0');
        }
        if (sum == x) cands.push_back(i); 
    }
    cout << *min_element(cands.begin(), cands.end()) << '\n' << *max_element(cands.begin(), cands.end());
}