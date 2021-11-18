#include <bits/stdc++.h>

#define ll long long
#define ld long int
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
        ld arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int dp[n];
        dp[n - 1] = 1;
        for (int i = n - 2; i >= 0; i--)
        {
            dp[i] = 1;
            if ((arr[i] < 0 && arr[i + 1] > 0) or (arr[i] > 0 && arr[i + 1] < 0))
            {
                dp[i] += dp[i + 1];
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << dp[i] << " ";
        }
        cout << endl;
    }

    return 0;
}