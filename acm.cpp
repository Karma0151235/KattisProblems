#include<bits/stdc++.h>
using namespace std;

int main(){
    map<char, int> pen; map<char, bool> solved;
    int time, total = 0, corr = 0;
    char problem; string res;
    while (cin >> time && time != -1){
        cin >> problem >> res;
        if (res == "wrong") pen[problem] += 20;
        else if (res == "right"){
            corr++;
            total += time + pen[problem];
        }
    }
    cout << corr << " " << total << '\n';
}