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
        ld dp[n];
        dp[0] = 1;
        ld result = 1;
        for (int i = 1; i < n; i++)
        {
            dp[i] = 1;
            if (arr[i - 1] <= arr[i])
            {
                dp[i] += dp[i - 1];
            }
            result += dp[i];
        }
        cout << result << endl;
    }

    return 0;
}