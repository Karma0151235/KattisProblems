#include <bits/stdc++.h>
using namespace std;

int	main(){
	int t; cin >> t;
	while (t--){
		int i, o = 0, s = 0; cin >> i;
		if (i % 2 != 0)
			o = 1;
		long long r = sqrt(i);
		if (r * r == i) s = 1;
		if (o && s)
			cout << "OS";
		else if (o && !s)
			cout << "O";
		else if (s && !o)
			cout << "S";
		else
			cout << "EMPTY";
		cout << '\n';
	}
}