#include <bits/stdc++.h>

#define ll long long
#define ld long int
#define MOD 1000000007

using namespace std;

ld solve(ld n, int k, ld arr[])
{
    ld dp[n];
    ld max_e = 0, max_i = -1, second_max_e = 0;
    int current_block = 0;

    int block_size = (n + k - 1) / k; // Using Ceil alternative
    ld i = 0;

    while (block_size-- and i < n)
    {
        ld cmax_e = 0, cmax_i = -1, second_cmax_e = 0;
        ld block_start = i;
        for (i; i < block_start + k and i < n; i++)
        {
            if (i == max_i + k)
            {
                dp[i] = second_max_e + max(arr[i], (ld)0);
            }
            else
            {
                dp[i] = max_e + max(arr[i], (ld)0);
            }
            // Current max updation
            if (dp[i] > cmax_e)
            {
                cmax_e = dp[i];
                cmax_i = i;
            }
            else if (dp[i] > second_cmax_e)
            {
                second_cmax_e = dp[i];
            }
        }

        // Update max for next block
        if (cmax_e > max_e)
        {
            max_e = cmax_e;
            max_i = cmax_i;
        }
        second_max_e = max(second_cmax_e, second_max_e);
    }
    return max_e;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ld n;
        int k;
        cin >> n >> k;
        ld arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << solve(n, k, arr) << endl;
    }

    return 0;
}