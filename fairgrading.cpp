#include <bits/stdc++.h>
using namespace std;

int	main(){
	float x, y, z; cin >> x >> y >> z;
	float ans = (0.25 * x) + (0.25 * y) + (0.5 * z);
	if (ans >= 90)
		cout << "A";
	else if (ans >= 80)
		cout << "B";
	else if (ans >= 70)
		cout << "C";
	else if (ans >= 60)
		cout << "D";
	else
		cout << "F";
	cout << '\n';
}