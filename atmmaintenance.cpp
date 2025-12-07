#include <bits/stdc++.h>
using namespace std;

int	main(){
	int t, n; cin >> t >> n;
	for (int i = 0; i < t; i++)
	{
		int p; cin >> p;
		if (n >= p)
		{
			n -= p;
			cout << 1;
		}
		else
			cout << 0;
	}
	cout << '\n';
}