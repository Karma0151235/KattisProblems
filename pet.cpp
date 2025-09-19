#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> scores;
    for (int i = 0; i < 5; i++){
        int a, b, c, d; cin >> a >> b >> c >> d;
        int sum = 0;
        sum += (a + b + c + d);
        scores.push_back(sum);
    }
    int max = *max_element(scores.begin(), scores.end());
    cout << (distance(scores.begin(), max_element(scores.begin(), scores.end())) + 1) << " " << max;
}