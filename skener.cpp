#include<bits/stdc++.h>
using namespace std;

int main(){
    int R, C, dr, dc; cin >> R >> C >> dr >> dc;
    int row = R * dr, col = C * dc;
    vector<string> grid(R);
    for (int i = 0; i < R; i++) cin >> grid[i];

    for (int i = 0; i < R; i++){
        for (int vr = 0; vr < dr; vr++){
            for (int j = 0; j < C; j++){
                for (int hc = 0; hc < dc; hc++){
                    cout << grid[i][j];
                }
            }
            cout << '\n';
        }
    }
}