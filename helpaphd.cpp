#include <bits/stdc++.h>
using namespace std;

int	main(){
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		int ans = 0;
		if (s == "P=NP")
		{
			cout << "skipped" << '\n';
			continue;
		}
		char del = '+';
		stringstream ss(s); string temp;
		while (getline(ss, temp, del))
			ans += stoi(temp);
		cout << ans << '\n';
	}
}