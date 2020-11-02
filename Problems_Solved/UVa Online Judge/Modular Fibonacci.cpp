#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll MOD = 100000007;
int arr[] = {0, 1, 1};
ll ans = 0;
// Step 1 - Find k
int k = 2;
// Step 2 - Find F1
vector<ll> F1{1, 1};

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

ll FibCalculation(ll n)
{
    // Step 3 - Make Transformation matrix
    vector<vector<ll>> T{{1, 1}, {1, 0}};

    T = pow(T, n - 2);

    ll res = 0;
    for (int x = 0; x < k; x++)
    {
        res = (res + (T[0][x] * F1[x]) % MOD) % MOD;
    }
    return res;
}

void compute(ll n, ll m)
{
    MOD = (1LL << m);
    if (n <= k)
    {
        ans = arr[n];
    }
    else
    {
        ans = FibCalculation(n);
    }
    cout << ans % MOD << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    while (cin >> n >> m)
    {
        compute(n, m);
    }

    return 0;
}