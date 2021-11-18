#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int solve(string s, string t, int i, int j, int n, int m, int k, int cont)
{
    if (i >= n or j >= m)
    {
        return 0;
    }
    // Recursive case based on continutity
    int maxValue = 0;
    if (cont == 1)
    {
        if (s[i] == t[j])
        {
            maxValue = max(1 + solve(s, t, i + 1, j + 1, n, m, k, 1), maxValue);
        }
        maxValue = max(solve(s, t, i + 1, j, n, m, k, 0), maxValue);
        maxValue = max(solve(s, t, i, j + 1, n, m, k, 0), maxValue);
    }
    else
    {
        maxValue = max(solve(s, t, i + 1, j, n, m, k, 0), maxValue);
        maxValue = max(solve(s, t, i, j + 1, n, m, k, 0), maxValue);
        if (s[i] == t[j] and k != 0)
        {
            maxValue = max(1 + solve(s, t, i + 1, j + 1, n, m, k - 1, 1), maxValue);
        }
    }
    return maxValue;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m, k;
    cin >> n >> m >> k;

    string s, t;
    cin >> s;
    cin >> t;
    cout << solve(s, t, 0, 0, n, m, k, 0);

    return 0;
}