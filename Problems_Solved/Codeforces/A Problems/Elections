//1593 A Elections
#include <bits/stdc++.h>

using namespace std;

int solveSingle(int best, int other1, int other2)
{
	return max(0, max(other1, other2) + 1 - best);
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int a, b, c;
		cin >> a >> b >> c;

		cout << solveSingle(a, b, c) << ' ' << solveSingle(b, a, c) << ' ' << solveSingle(c, a, b) << '\n';
	}

	return 0;
}
