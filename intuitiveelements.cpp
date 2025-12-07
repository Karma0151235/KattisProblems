#include <bits/stdc++.h>
using namespace std;

int	main(){
	int t; cin >> t; cin.ignore();
	while (t--)
	{
		string s1, s2; getline(cin, s1); getline(cin, s2);
		set<char> se1, se2; int f = 0;
		for (auto c : s1)
			se1.insert(c);
		for (auto c : s2)
			se2.insert(c);
		for (auto c : se2)
		{
			if (se1.count(c) == 0)
			{
				f = 1;
				cout << "NO"; break;
			}
		}
		if (!f)
			cout << "YES";
		cout << '\n';
	}
}