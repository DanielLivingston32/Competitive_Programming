// Work In Progress............
#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int arr[] = {1, 1, 0, 0, 2};
// Step 1 - Find k
int k = 4;
// Step 2 - Find F1
vector<ll> F1{2, 0, 0, 1};

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

void compute(ll n)
{
    if (n <= k)
    {
        cout << arr[n] << endl;
        return;
    }

    // Step 3 - Make Transformation matrix
    vector<vector<ll>> T{{6, -3, 0, 2}, {1, 0, 0, 0}, {0, 1, 0, 0}, {0, 0, 1, 0}};

    T = pow(T, n - 4);

    // for (int i = 0; i < k; i++)
    // {
    //     for (int j = 0; j < k; j++)
    //     {
    //         cout << T[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // // Computing a(n)
    // T[k - 1][0] = n - 3;
    // T[k - 1][1] = -(n - 5);
    // T[k - 1][2] = -(n - 2);
    // T[k - 1][3] = (n + 1);

    // for (int i = 0; i < k; i++)
    // {

    // }
    ll res = 0;
    for (int x = 0; x < k; x++)
    {
        res = (res + (T[0][x] * F1[x]) % MOD) % MOD;
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
        int n;
        cin >> n;
        compute(n);
    }

    return 0;
}