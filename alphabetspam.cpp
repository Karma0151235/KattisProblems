#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    float length = s.length();
    float ws = 0, uc = 0, lc = 0, sm = 0;
    for (char c : s){
        if (c == '_') ws++;
        else if (isupper(c)) uc++;
        else if (islower(c)) lc++;
        else sm++; 
    }
    cout << setprecision(7) << fixed << ws/length << '\n' << lc/length << '\n' << uc/length << '\n' << sm/length;
}