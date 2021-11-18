#include <bits/stdc++.h>

#define ll long long
#define ld long int
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, p;
    ld k;
    cin >> n >> k >> p;
    vector<pair<ld, int>> arr(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i;
    }

    sort(arr.begin(), arr.end());

    unordered_map<int, int> updatedIndexes;
    ld dp[n + 1] = {0};

    for (int i = 1; i <= n; i++)
    {
        updatedIndexes[arr[i].second] = i;
    }

    for (int i = 2; i <= n; i++)
    {
        if (arr[i].first - arr[i - 1].first <= k)
        {
            dp[i] = 1 + dp[i - 1];
        }
    }

    // Queries
    while (p--)
    {
        int a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << "Yes" << endl;
        }
        else
        {
            int x = updatedIndexes[a];
            int y = updatedIndexes[b];

            if (x > y)
            {
                swap(x, y);
            }

            if (dp[y] < (y - x))
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
    }

    return 0;
}