// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

long long numberOfPaths(int m, int n)
{
    if (m == 1 && n == 1)
    {
        return 1;
    }
    if (m < 1 or n < 1)
    {
        return 0;
    }
    return numberOfPaths(m, n - 1) + numberOfPaths(m - 1, n);
}

// { Driver Code Starts.

long long numberOfPathsDp(int m, int n)
{
    long long dp[m + 2][n + 2] = {0};

    for (int j = 0; j <= n; j++)
    {
        dp[0][j] = 0;
    }

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 and j == 1)
            {
                dp[i][j] = 1;
            }
            else
            {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
    }

    return dp[m][n];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> m >> n;
        cout << numberOfPathsDp(m, n) << endl;
    }
    return 0;
} // } Driver Code Ends