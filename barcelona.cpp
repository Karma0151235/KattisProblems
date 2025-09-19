#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b; cin >> a >> b;
    int flag = 0, m = 0;
    for (int i = 1; i <= a; i++){
        int c; cin >> c;
        if ((c == b) && i == 1) cout << "fyrst";
        else if ((c == b) && i == 2) cout << "naestfyrst";
        else if ((c == b) && i > 2){
            m = i;
            flag = 1;
        }
    }
    if (flag == 1) cout << m << " " << "fyrst";
}