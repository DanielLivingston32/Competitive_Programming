#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

ll binomialCoeff(int n, int k)
{
    ll C[n + 1][k + 1];
    int i, j;

    // Caculate value of Binomial Coefficient
    // in bottom up manner
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= min(i, k); j++)
        {
            // Base Cases
            if (j == 0 || j == i)
                C[i][j] = 1;

            // Calculate value using previously
            // stored values
            else
                C[i][j] = C[i - 1][j - 1] +
                          C[i - 1][j];
        }
    }

    return C[n][k];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    int arr[n], cnt = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (!(arr[i] & 1))
        {
            cnt++;
        }
    }
    if (cnt < k)
    {
        cout << 0;
        return 0;
    }
    cout << binomialCoeff(cnt, k);

    return 0;
}