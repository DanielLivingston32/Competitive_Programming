#include <iostream>

#define ll long long
#define MOD 1000000007

using namespace std;

ll topDownWines(int i, int j, int y, int arr[], ll dp[][100])
{
    // Base case
    if (i > j)
    {
        return 0;
    }
    // Lookup
    if (dp[i][j])
    {
        return dp[i][j];
    }

    // Caluculate dp[i][j];
    ll subproblem1 = arr[i] * y + topDownWines(i + 1, j, y, arr, dp);
    ll subproblem2 = arr[j] * y + topDownWines(i, j - 1, y, arr, dp);

    dp[i][j] = max(subproblem1, subproblem2);
    return dp[i][j];
}

int main()
{

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll dp[n][100];
    cout << topDownWines(0, n - 1, 1, arr, dp);

    return 0;
}