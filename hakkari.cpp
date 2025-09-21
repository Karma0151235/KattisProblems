#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y; cin >> x >> y;
    vector<int> row, column;
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            char in; cin >> in;
            if (in == '*'){
                row.push_back(i + 1);
                column.push_back(j + 1);
            }
        }
    }
    int n = row.size();
    cout << n << '\n';
    for (int i = 0; i < n; i++){
        cout << row[i] << " " << column[i] << '\n';
    }
}