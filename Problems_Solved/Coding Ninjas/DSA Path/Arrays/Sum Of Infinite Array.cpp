#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    int n;
    cin >> n;
    vector<int> arr;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    int q;
    cin >> q;
    vector<vector<long long>> queries;

    for (int i = 0; i < q; i++)
    {
        vector<long long> tempArr;
        cin >> temp;
        tempArr.push_back(temp);
        cin >> temp;
        tempArr.push_back(temp);
        queries.push_back(tempArr);
    }

    vector<long long> prefixSum;
    prefixSum.push_back(arr[0]);
    for (int i = 1; i < n; i++)
    {
        prefixSum.push_back((arr[i] + prefixSum[i - 1]) % MOD);
    }
    for (int i = 0; i < q; i++)
    {
        long long l = queries[i][0] - 1;
        long long r = queries[i][1] - 1;
        long long rsum = (prefixSum[r % n] + (prefixSum[n - 1] * (r / n)) % MOD) % MOD;
        int reml = l % n;

        if (reml != 0)
        {
            long long lsum = (prefixSum[reml - 1] + (prefixSum[n - 1] * (l / n)) % MOD) % MOD;
            cout << ((rsum - lsum + MOD) % MOD) << " ";
        }
        else
        {
            cout << ((rsum - ((prefixSum[n - 1] * (l / n)) % MOD) + MOD) % MOD) << " ";
        }
    }

    return 0;
}