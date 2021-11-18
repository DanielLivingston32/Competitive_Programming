#include <bits/stdc++.h>

#define ll long long
#define ld long int
#define MOD 1000000007

using namespace std;

int findConflicts(int i, int j, int arr[])
{
    int conflict = 0;
    int f[101] = {0};
    for (i; i <= j; i++)
    {
        f[arr[i]]++;
        conflict += (f[arr[i]] > 2 ? 1 : (f[arr[i]] == 2 ? 2 : 0));
    }
    return conflict;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int dp[n];
        dp[0] = k;
        for (int i = 1; i < n; i++)
        {
            dp[i] = k + findConflicts(0, i, arr);
            for (int j = i - 1; j >= 0; j--)
            {
                dp[i] = min(dp[i], dp[j] + k + findConflicts(j + 1, i, arr));
            }
        }
        cout << dp[n - 1] << endl;
        ;
    }

    return 0;
}