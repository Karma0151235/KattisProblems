#include<bits/stdc++.h>
using namespace std;

int main(){
    int a; cin >> a;
    string binary = bitset<32>(a).to_string();
    binary.erase(0, min(binary.find_first_not_of('0'), binary.length() - 1));
    int i = 0, j = binary.length() - 1;
    while (i < j){
        swap(binary[i], binary[j]);
        i++;
        j--;
    }
    cout << stoi(binary, nullptr, 2);
}