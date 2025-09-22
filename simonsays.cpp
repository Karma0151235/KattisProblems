#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string line; getline(cin, line);
    string prefix = "Simon says ";
    for (int i = 0; i < n; ++i){
        getline(cin, line);
        if (line.size() >= prefix.size() && 
            line.compare(0, prefix.size(), prefix) == 0){
                cout << line.substr(prefix.size()) << '\n';
            }
    }
}

// int main(){
//     int n; cin >> n;
//     vector<string> ans;
//     for (int i = 0; i < n; i++){
//         string s1, s2; cin >> s1 >> s2;
//         if ((s1 == "Simon") && (s2 == "says")){
//             string a; getline(cin, a);
//             if (!a.empty() && a[0] == ' ') a.erase(a.begin());
//             ans.push_back(a);
//         } else {
//             string b; getline(cin, b);
//         }
//     }
//     for (int i = 0, sz = ans.size(); i < sz; i++){
//         cout << ans[i] << '\n';
//     }
// }