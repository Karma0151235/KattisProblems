#include<bits/stdc++.h>
using namespace std;

int main(){ int r, c, n; cin >> r >> c >> n; 
    vector <int> x, y; 
    for (int i = 0; i < n; i++){ 
        int a, b; cin >> a >> b; 
        x.push_back(a); y.push_back(b); 
    } 
    int i = 0, j = 0, k = 0; 
    while (i < r){
        j = 0; 
        while (j < c){
            if ((i+1 == x[k]) && (j+1 == y[k])){
                cout << "*";
                k++;
            } else {
                cout << "."; 
            } 
            j++; 
        } cout << '\n'; 
        i++; 
    } 
}
// int main(){
//     int r, c, n; cin >> r >> c >> n;
//     set<pair<int, int>> mines;
//     for (int i = 0; i < n; i++){
//         int a, b; cin >> a >> b;
//         mines.insert({a, b});
//     }
//     for (int i = 0; i < r; i++){
//         for (int j = 0; j < c; j++){
//             if (mines.count({i+1, j+1})) cout << "*";
//             else cout << ".";
//         }
//         cout << '\n';
//     }
// }