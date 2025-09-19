#include<bits/stdc++.h>
using namespace std;

void cover_rows(int col){
    if (col % 2 == 0){
        for (int i = 1; i <= col; i++){  
            if ((i == (col / 2)) || (i == (col / 2) + 1)){
                cout << "x";
            } else {
                cout << ".";
            }
        }
    } else{
        for (int i = 1; i <= col; i++){
            if (i == (col / 2) + 1){
                cout << "x";
            } else{
                cout << ".";
            }
        }
    }
    cout << '\n';
}

void middle_rows(int col){
    if (col % 2 == 0){
        for (int i = 1; i <= col; i++){  
            if ((i == (col / 2)) || (i == (col / 2) + 1)){
                cout << ".";
            } else {
                cout << "x";
            }
        }
    } else{
        for (int i = 1; i <= col; i++){
            if (i == (col / 2) + 1){
                cout << ".";
            } else{
                cout << "x";
            }
        }
    }
    cout << '\n';
}

void print(int row, int col){
    if (row % 2 == 0){
        for (int i = 1; i <= row; i++){
            if ((i == (row / 2)) || (i == (row / 2) + 1)){
                middle_rows(col);
            } else {
                cover_rows(col);
            }
        }
    } else{
        for (int i = 1; i <= row; i++){
            if ((i == (row / 2) + 1)){
                middle_rows(col);
            } else {
                cover_rows(col);
            }
        }
    }
}

int main(){
    int R, C, dr, dc; cin >> R >> C >> dr >> dc;
    int row = R * dr, col = C * dc;
    print(row, col);
}