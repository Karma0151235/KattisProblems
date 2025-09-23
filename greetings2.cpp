#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int target = 2 * count(s.begin(), s.end(), 'e');
    cout << 'h';
    for (int i = 0; i < target; i++){
        cout << 'e';
    }
    cout << 'y';
}