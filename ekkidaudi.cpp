#include<bits/stdc++.h>
using namespace std;

int main(){
    string a, b; getline(cin, a); getline(cin, b);
    string ans1 = "", ans2 = "";
    int i = 0;
    while (i < a.size() && a[i] != '|'){
        ans1 += a[i];
        i++;
    }
    i++;
    while (i < a.size()){
        ans2 += a[i];
        i++;
    }
    int j = 0;
    while (j < b.size() && b[j] != '|'){
        ans1 += b[j];
        j++;
    }
    j++;
    while (j < b.size()){
        ans2 += b[j];
        j++;
    }
    cout << ans1 << " " << ans2;
}