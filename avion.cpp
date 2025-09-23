#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> ans;
    for (int i = 0; i < 5; i++){
        string s; cin >> s;
        for (int j = 0, n = s.length(); j < n - 2; j++){
            if (s[j] == 'F' && s[j + 1] == 'B' && s[j + 2] == 'I'){
                ans.push_back(i + 1);
                break;
            }
        }
    }
    int m = ans.size();
    if (m == 0) cout << "HE GOT AWAY!";
    else{
        sort(ans.begin(), ans.end());
        for (int i = 0; i < m; i++){
        cout << ans[i] << " ";
    }
    }
    
}