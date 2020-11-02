#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int arr[] = {0, 1, 2};
ll Sum_m, Sum_n;
// Step 1 - Find k
int k = 3;
// Step 2 - Find F1
vector<ll> F1{2, 1, 1};

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
    // Step 3 - Make Transformation matrix
    vector<vector<ll>> T{{1, 1, 1}, {0, 1, 1}, {0, 1, 0}};

    T = pow(T, n - 2);

    // for (int i = 0; i < k; i++)
    // {
    //     for (int j = 0; j < k; j++)
    //     {
    //         cout << T[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    ll res = 0;
    for (int x = 0; x < k; x++)
    {
        res = (res + (T[0][x] * F1[x]) % MOD) % MOD;
    }
    return res;
}

void compute(ll n, ll m)
{

    if (n <= 2 & m <= 2)
    {
        if (n - 1 <= 0)
        {
            Sum_n = 0;
        }
        else
        {
            Sum_n = arr[n - 1];
        }
        cout << arr[m] - Sum_n << endl;
        return;
    }
    else if (n <= 2)
    {
        if (n - 1 <= 0)
        {
            Sum_n = 0;
        }
        else
        {
            Sum_n = arr[n - 1];
        }
        Sum_m = SumCalculation(m);
        cout << Sum_m - Sum_n << endl;
    }
    else
    {
        if (n - 1 <= 0)
        {
            Sum_n = 0;
        }
        else if (n - 1 <= 2)
        {
            Sum_n = arr[n - 1];
        }
        else
        {
            Sum_n = SumCalculation(n - 1);
        }

        Sum_m = SumCalculation(m);
        cout << (Sum_m - Sum_n + MOD) % MOD << endl;
    }
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
        compute(n, m);
    }

    return 0;
}