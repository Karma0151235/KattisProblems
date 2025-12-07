#include <bits/stdc++.h>
using namespace std;

int	main(){
	int n, a, b; cin >> n >> a >> b; int fi = 0, bu = 0, fb = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i % a == 0 && i % b == 0)
			fb++;
		else if (i % a == 0)
			fi++;
		else if (i % b == 0)
			bu++;
	}
	cout << fi << " " << bu << " " << fb << '\n';
}