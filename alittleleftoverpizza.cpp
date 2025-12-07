#include <bits/stdc++.h>
using namespace std;

int	main(){
	int r; cin >> r; int s = 0, m = 0, l=0, ls=0, lm =0, ll =0, left = 0;
	while (r--)
	{
		char c; cin >> c >> left;
		if (c == 'S')
		{
			ls += left;
			s++;
		}
		else if (c == 'M')
		{
			lm += left;
			m++;
		}
		else if (c == 'L')
		{
			ll += left;
			l++;
		}
	}
	int box = 0;
	if (ls < 6 && (ls != 0))
		box++;
	else
	{
		while (ls >= 6)
		{
			box++;
			s--;
			ls -= 6;
		}
		if (ls < 6 && (ls != 0))
			box++;
	}
	if (lm < 8 && (lm != 0))
		box++;
	else
	{
		while (lm >= 8)
		{
			box++;
			m--;
			lm -= 8;
		}
		if (lm < 8 && (lm != 0))
			box++;
	}
	if (ll < 12 && (ll != 0))
		box++;
	else
	{
		while (ll >= 12)
		{
			box++;
			l--;
			ll -= 12;
		}
		if (ll < 12 && (ll != 0))
			box++;
	}
	cout << box << '\n';
}