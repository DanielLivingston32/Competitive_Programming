// Used Matrix Exponentation Fn = T^(n-1) * F1
#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000000

using namespace std;

int k;
ll input, n;
vector<ll> F1, c;

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
    if (expo & 1)
    {
        return multiply(base, pow(base, expo - 1));
    }
    vector<vector<ll>> subproblems = pow(base, expo / 2);
    return multiply(subproblems, subproblems);
}

void compute()
{
    if (n <= k)
    {
        cout << F1[n - 1] << endl;
        return;
    }

    // Step - 1 K is given
    // Step - 2 Making F1 is already done
    // Step - 3 Making the transformation matrix
    vector<vector<ll>> T(k, vector<ll>(k));
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (i < k - 1)
            {
                if (j == i + 1)
                {
                    T[i][j] = 1;
                }
                else
                {
                    T[i][j] = 0;
                }
            }
            else
            {
                T[i][j] = c[k - j - 1];
            }
        }
    }

    T = pow(T, n - 1);

    ll res = 0;
    // Calculate only the first row and first column of Fn matrix to get F(N) value
    for (int i = 0; i < k; i++)
    {
        res = (res + (T[0][i] * F1[i]) % MOD) % MOD;
    }
    cout << res << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> k;

        // Inputing b(i) elements directly as F1 for formula calculation
        for (int i = 0; i < k; i++)
        {
            cin >> input;
            F1.push_back(input);
        }

        // Inputing constants
        for (int i = 0; i < k; i++)
        {
            cin >> input;
            c.push_back(input);
        }
        cin >> n;
        compute();
        F1.clear();
        c.clear();
    }

    return 0;
}