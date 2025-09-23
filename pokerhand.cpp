#include<bits/stdc++.h>
using namespace std;

int main(){
    string ranks = "";
    for (int i = 0; i < 5; i++){
        string a; cin >> a;
        ranks += a[0];
    }
    set<char> check(ranks.begin(), ranks.end());
    vector<int> counts;
    for (char c : check){
        counts.push_back(count(ranks.begin(), ranks.end(), c));
    }
    cout << *max_element(counts.begin(), counts.end());
}