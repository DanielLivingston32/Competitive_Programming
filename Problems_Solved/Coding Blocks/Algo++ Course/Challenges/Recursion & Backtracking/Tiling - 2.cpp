#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

ll tiling_recursion(int n, int m)
{
    int count[n + 1];
    count[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n < m)
        {
            count[i] = 1;
        }
        else if (n == m)
        {
            count[i] = 2;
        }
        else
        {
            count[i] = (count[i - 1] + count[i - m]) % MOD;
        }
    }
    return count[n];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        cout << (tiling_recursion(n, m) % MOD) << endl;
    }

    return 0;
}