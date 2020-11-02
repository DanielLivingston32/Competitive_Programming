#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll MOD = 1000000007;
vector<ll> b, c, sum;
ll Sum_m, Sum_n;
// Step 1 - Find k
int k;

vector<vector<ll>> multiply(vector<vector<ll>> A, vector<vector<ll>> B)
{
    vector<vector<ll>> C(k, vector<ll>(k));
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            for (int x = 0; x < k; x++)
            {
                C[i][j] = (C[i][j] + (A[i][x] * B[x][j]) % MOD) % MOD;
            }
        }
    }
    return C;
}

vector<vector<ll>> pow(vector<vector<ll>> base, ll expo)
{
    if (expo == 1)
    {
        return base;
    }
    // Odd case
    if (expo & 1)
    {
        return multiply(base, pow(base, expo - 1));
    }
    // Even case
    vector<vector<ll>> Subproblems = pow(base, expo / 2);
    return multiply(Subproblems, Subproblems);
}

ll SumCalculation(ll n)
{
    // Step 2 - Make F1
    vector<ll> F1(k);
    F1[0] = sum[k - 1];
    for (int i = 1; i < k; i++)
    {
        F1[i] = b[i - 1];
    }

    // Step 3 - Make Transformation matrix
    vector<vector<ll>> T(k, vector<ll>(k));
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (i == 0)
            {
                if (j == 0)
                {
                    T[i][j] = 1;
                }
                else
                {
                    T[i][j] = c[j - 1];
                }
                continue;
            }
            if (i == 1)
            {
                if (j != 0)
                {
                    T[i][j] = c[j - 1];
                }
                continue;
            }
            if (j == i - 1)
            {
                T[i][j] = 1;
            }
        }
    }

    T = pow(T, n - k + 1);

    // Calc S(N)
    ll res = 0;
    for (int x = 0; x < k; x++)
    {
        res = (res + (T[0][x] * F1[x]) % MOD) % MOD;
    }

    return res;
}

void compute(ll m, ll n)
{

    if (n <= k & m <= k)
    {

        cout << sum[n] - sum[m - 1] << endl;
        return;
    }
    else if (m <= k)
    {
        Sum_m = sum[m - 1];
        k++;
        Sum_n = SumCalculation(n);
        cout << Sum_n - Sum_m << endl;
    }
    else
    {
        k++;
        if (m - 1 <= k - 1)
        {
            Sum_m = sum[m - 1];
        }
        else
        {
            Sum_m = SumCalculation(m - 1);
        }

        Sum_n = SumCalculation(n);
        cout << (Sum_n - Sum_m + MOD) % MOD << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    ll temp;
    while (t--)
    {
        cin >> k;
        sum.push_back(0);
        for (int i = 0; i < k; i++)
        {
            cin >> temp;
            b.push_back(temp);
            sum.push_back(b[i] + sum[i]);
        }
        for (int i = 0; i < k; i++)
        {
            cin >> temp;
            c.push_back(temp);
        }
        ll m, n;
        cin >> m >> n >> MOD;
        compute(m, n);
        b.clear();
        c.clear();
        sum.clear();
    }

    return 0;
}