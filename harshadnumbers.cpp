#include<bits/stdc++.h>
using namespace std;

int isharshad(int n){
    string s = to_string(n);
    int sum = 0;
    for (int i = 0, m = s.length(); i < m; i++){
        sum += (s[i] - '0');
    }
    if (n % sum == 0) return 1;
    else return 0;
}

int main(){
    int n; cin >> n;
    if (isharshad(n) == 1){
        cout << n;
    } else {
        while (isharshad(n) == 0){
            n++;
        }
        cout << n;
    }
}