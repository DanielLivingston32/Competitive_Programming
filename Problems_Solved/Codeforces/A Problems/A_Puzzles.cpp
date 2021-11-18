#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + m);
    int min_value = arr[n - 1] - arr[0];
    for (int i = 1; i + n - 1 < m; i++)
    {
        min_value = min(min_value, arr[i + n - 1] - arr[i]);
    }
    cout << min_value;

    return 0;
}