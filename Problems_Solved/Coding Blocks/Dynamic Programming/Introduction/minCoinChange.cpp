// Coin Denominators = [1, 7, 10]

#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int dpTopDownApproach(int n, int coins[], int k, int dp[])
{
    // Base Case
    if (k == 0)
    {
        return 0;
    }

    // Lookup
    if (dp[k] != 0)
    {
        return dp[k];
    }

    // If Lookup failed
    int minValue = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (k - coins[i] >= 0)
        {
            minValue = min(minValue, dpTopDownApproach(n, coins, k - coins[i], dp));
        }
    }
    dp[k] = minValue + 1;
    return dp[k];
}

int dpBottomUpApproach(int n, int coins[], int k)
{
    int dp[k + 1] = {0};
    for (int i = 1; i <= k; i++)
    {
        dp[i] = INT_MAX;
        for (int j = 0; j < n; j++)
        {
            if (i - coins[j] >= 0)
            {
                int subProblem = dp[i - coins[j]];
                dp[i] = min(dp[i], subProblem + 1);
            }
        }
    }
    return dp[k];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int coins[n];
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }

    int k;
    cin >> k;
    int dp[k + 1] = {0};
    // cout << dpTopDownApproach(n, coins, k, dp);
    cout << dpBottomUpApproach(n, coins, k);

    return 0;
}