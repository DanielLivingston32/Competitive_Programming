#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

ll dice(long int n)
{
    ll dp[n + 1];
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = (dp[i - 1] + dp[i - 2] + (i - 3 >= 0 ? dp[i - 3] : 0) + (i - 4 >= 0 ? dp[i - 4] : 0) + (i - 5 >= 0 ? dp[i - 5] : 0) + (i - 6 >= 0 ? dp[i - 6] : 0)) % MOD;
    }
    return dp[n];
}

int main()
{
    ios_base::sync_with_stdio(0);
    long int n;
    cin >> n;
    cout << dice(n);

    return 0;
}