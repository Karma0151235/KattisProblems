#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    char b; cin >> b;
    int ans = 0;
    map<char, int> dom = {
        {'A', 11}, {'K', 4}, {'Q', 3}, {'J', 20}, {'T', 10}, {'9', 14}, {'8', 0}, {'7', 0}
    };
    map<char, int> non = {
        {'A', 11}, {'K', 4}, {'Q', 3}, {'J', 2}, {'T', 10}, {'9', 0}, {'8', 0}, {'7', 0}
    };
    for (int i = 0; i < 4 * n; i++){
        string in; cin >> in;
        if (in[1] == b){
            ans += dom[in[0]];
        } else {
            ans += non[in[0]];
        }
    }
    cout << ans;

}