#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int k, n; cin >> k >> n;
        int sum = 0, osum = 0, esum = 0;
        for (int i = 1; i <= n; i++){
            sum += i;
        }
        int j = 1;
        while (j <= 2*n){
            if (j % 2 != 0){
                osum += j;
            }
            j++;
        }
        for (int k = 2; k <= 2 * n; k += 2){
            esum += k;
        }
        cout << k << " " << sum << " " << osum << " " << esum << '\n';
    }
}