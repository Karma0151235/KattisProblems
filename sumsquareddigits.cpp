#include <bits/stdc++.h>
using namespace std;

int	main(){
	int t; cin >> t;
	while (t--)
	{
		int k, b;
		long long n, ans = 0;
		cin >> k >> b >> n;
		while (n > 0)
		{
			int d = n % b;
			ans += d * d;
			n /= b;
		}
		cout << k << ' ' << ans << '\n';
	}
}