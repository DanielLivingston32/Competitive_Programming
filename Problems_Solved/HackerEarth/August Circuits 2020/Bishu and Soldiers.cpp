#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int arr[n];
	long int prefix_sum[n];
	cin >> arr[0];
	for (int i = 1; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	prefix_sum[0] = arr[0];
	for (int i = 1; i < n; i++)
	{
		prefix_sum[i] = prefix_sum[i - 1] + arr[i];
	}
	int q, m, start, end, mid, ans;
	cin >> q;
	while (q--)
	{
		cin >> m;
		start = 0;
		end = n - 1;
		while (start <= end)
		{
			mid = (start + end) / 2;
			if (arr[mid] <= m)
			{
				ans = mid;
				start = mid + 1;
			}
			else
			{
				end = mid - 1;
			}
		}
		cout << ans + 1 << " " << prefix_sum[ans] << endl;
	}
}