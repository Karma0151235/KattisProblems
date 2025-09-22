#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<string> problems (n);
    for (int i = 0; i < n; i++) cin >> problems[i];
    vector<long long> scores(n, 0);
    for (int team = 0; team < m; team++){
        for(int i = 0; i < n; i++){
            int score; cin >> score;
            scores[i] += score;
        }
    }
    int mx = 0;
    for (int i = 1; i < n; i++){
        if (scores[i] > scores[mx]){
            mx = i;
        }
    }
    cout << problems[mx] << '\n';
}