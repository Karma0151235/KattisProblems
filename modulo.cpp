#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> values; 
    for (int i = 0; i < 10; i++){
        int a; cin >> a;
        values.insert(a % 42);
    }
    cout << values.size();
}