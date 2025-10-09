#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n; vector <int> days(n);
    for (int i = 0; i < n; i++) cin >> days[i];
    sort(days.rbegin(), days.rend());
    int res = 0;
    for (int i = 0; i < n; i++){
        res = max(res, days[i] + i + 1);
    }
    cout << res + 1 << '\n';
}


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n; cin >> n; vector<int> days (n);
//     for (int i = 0; i < n; i++) cin >> days[i];
//     vector<int> planted; sort(days.begin(), days.end()); int day = 0;
//     for (int i = n - 1; i >= 0; i--){
//         for(int &j : planted) {if(j > 0) j--;}
//         planted.push_back(days[i]);
//         day++;
//     }
//     while(count(planted.begin(), planted.end(), 0) != n){
//         for (int &j : planted) {if(j > 0) j--;}
//         day++;
//     }
//     cout << day + 1;
// }