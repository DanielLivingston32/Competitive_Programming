#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        ll min_time = 0, max_time = 0;
        if (n & 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (!(i & 1))
                {
                    min_time += arr[i];
                }
                if (i >= n / 2)
                {
                    max_time += arr[i];
                }
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (i & 1)
                {
                    min_time += arr[i];
                }
                if (i >= n / 2)
                {
                    max_time += arr[i];
                }
            }
        }
        cout << min_time << " " << max_time << endl;
    }

    return 0;
}