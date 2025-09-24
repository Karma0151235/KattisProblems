#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int sum = 0;
        vector<int> arr;
        for (int i = 0; i < n; i++){
            int a; cin >> a;
            sum += a;
            arr.push_back(a);
        }
        int avg = sum / n;
        int ct = 0;
        for (int i = 0; i < n; i++){
            if (arr[i] > avg) ct++;
        }
        cout << fixed << setprecision(3) << (ct / (float) n) * 100 << '%' << '\n';
    }
}