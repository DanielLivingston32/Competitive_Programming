#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

long int solve(int n, int k, long int dp[])
{
    if (n < 0)
    {
        return 0;
    }
    if (dp[n] != 0)
    {
        return dp[n];
    }
    long int totalWays = 0;
    for (int i = 1; i <= k; i++)
    {
        totalWays += solve(n - i, k, dp);
    }
    return totalWays;
}

long int solveBottomUp(int n, int k)
{
    long int dp[n + 1] = {0};
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (i - j >= 0)
            {
                dp[i] += dp[i - j];
            }
        }
    }
    return dp[n];
}

long int solveBottomUpOpt(int n, int k)
{
    long int dp[n + 1] = {0};
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        dp[i] = 2 * dp[i - 1];
        if (i - 1 - k >= 0)
        {
            dp[i] += dp[i - 1 - k];
        }
    }
    return dp[n];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    long int dp[n + 1] = {0};
    dp[0] = 1;
    // cout << solve(n, k,dp);
    cout << solveBottomUp(n, k);

    return 0;
}