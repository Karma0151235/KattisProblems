#include <bits/stdc++.h>
using namespace std;

int	main(){
	float t, a, b, ans, mn, mx;
	char d, s; cin >> t >> d >> a >> s >> b;
	mn = t + b; mx = (t * a) + b;
	ans = (mn + mx) / 2;
	cout << ans << '\n';
}