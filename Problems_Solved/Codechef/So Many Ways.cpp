#include <bits/stdc++.h>

#define ll long long
#define ld long int
#define MOD 1000000007

using namespace std;

ld solve(int n, int i, ld arr[][2], ld current)
{
    if (i == n)
    {
        return (current & 1);
    }
    // Recursive case
    ld left = solve(n, i + 1, arr, (current + arr[i][0]) % MOD);
    ld right = solve(n, i + 1, arr, (current + arr[i][1]) % MOD);
    return (left + right) % MOD;
}

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
        ld arr[n][2];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i][0];
            cin >> arr[i][1];
        }

        cout << solve(n, 0, arr, 0);
    }

    return 0;
}