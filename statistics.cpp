#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, set = 1; 
    while (cin >> n){
        vector<int> nums(n);
        for (int i = 0; i < n; i++) cin >> nums[i];
        int mx = *max_element(nums.begin(), nums.end());
        int mn = *min_element(nums.begin(), nums.end());
        cout << "Case " << set << ": ";
        cout << mn << " " << mx << " " << mx - mn;
        cout << '\n';
        set++;
    }
}