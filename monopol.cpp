#include<bits/stdc++.h>
using namespace std;

int main(){
    int a; cin >> a;
    int sum = 0;
    for (int i = 0; i < a; i++){
        int combi = 0;
        int c; cin >> c;
        for (int x = 1; x <= 6; x++){
            for (int y = 1; y <= 6; y++){
                if (x + y == c) combi++;
            }
        }
        sum += combi;
    }
    cout << sum / 36.0;
}