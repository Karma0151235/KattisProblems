#include<bits/stdc++.h>
using namespace std;

void cover_row(int col){
    for (int i = 0; i < col; i++){
        if ((i == 0) || (i == col - 1)) cout << '+';
        else cout << '-';
    }
}

void middle_row(int col){
    for (int i = 0; i < col; i++){
        if ((i == 0) || (i == col - 1)) cout << '|';
        else cout << ' ';
    }
}

void print(int col, int row){
    for (int i = 0; i < row; i++){
        if ((i == 0) || (i == row - 1)) cover_row(col);
        else middle_row(col);
        cout << '\n';
    }
}

int main(){
    int n; cin >> n;
    int col = n + 2, row = n + 2;
    print(col, row);
}