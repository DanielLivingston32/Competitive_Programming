#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long int no;
		cin >> no;
		int even_sum = 0, odd_sum = 0;
		while (no)
		{
			int temp = no % 10;
			if (temp % 2 == 0)
			{
				even_sum += temp;
			}
			else
			{
				odd_sum += temp;
			}
			no /= 10;
		}
		if (even_sum % 4 == 0 || odd_sum % 3 == 0)
		{
			cout << "Yes";
		}
		else
		{
			cout << "No";
		}
		cout << endl;
	}
}