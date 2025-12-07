#include <bits/stdc++.h>
using namespace std;

int	main(){
	vector<tuple<int, char>> inp;
	int r, c; cin >> r >> c;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			char a; cin >> a;
			if (a != '.')
			{
				inp.push_back(make_tuple(j, a));
			}
		}
	}
	sort(inp.begin(), inp.end());
	for (int i = 0; i < c; i++)
	{
		cout << get<1>(inp[i]);
	}
	cout << '\n';
}