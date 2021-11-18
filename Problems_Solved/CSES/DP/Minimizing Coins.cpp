#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

long int coins(int n, int x, long int denom[], long int dp[])
{
    for (int i = 1; i <= x; i++)
    {
        dp[i] = 1e9;
        for (int j = 0; j < n; j++)
        {
            if (denom[j] <= i)
            {
                dp[i] = min(dp[i], dp[i - denom[j]] + 1);
            }
        }
    }
    if (dp[x] >= 1e9)
    {
        dp[x] = -1;
    }
    return dp[x];
}

int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    long int x;
    cin >> n >> x;

    long int denom[n];
    for (int i = 0; i < n; i++)
    {
        cin >> denom[i];
    }
    long int dp[x + 1] = {0};
    cout << coins(n, x, denom, dp);

    return 0;
}