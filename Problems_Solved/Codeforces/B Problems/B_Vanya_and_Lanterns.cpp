#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, l;
    cin >> n >> l;

    double arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    double maxDistance = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] - arr[i] > maxDistance)
        {
            maxDistance = arr[i + 1] - arr[i];
        }
    }

    double lowerBound = arr[0] - 0;
    double upperBound = l - arr[n - 1];

    cout << fixed << setprecision(10) << max((double)maxDistance / 2.00, max(lowerBound, upperBound));

    return 0;
}
