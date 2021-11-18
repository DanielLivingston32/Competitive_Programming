#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> arr(n);
        int a, b;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            arr[i] = make_pair(a, b);
        }
        int checkArr[102] = {0};
        for (int i = 0; i < n; i++)
        {
            checkArr[arr[i].first] = 1;
            checkArr[arr[i].second + 1] = -1;
        }
        int maxValue = 0;
        for (int i = 1; i < n; i++)
        {
            arr[i] = arr[i - 1] + arr[i];
            maxValue = max(maxValue, arr[i]);
        }
        cout << maxValue << endl;
    }

    return 0;
}