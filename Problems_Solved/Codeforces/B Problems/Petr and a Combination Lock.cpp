#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0, limit = (pow(2, n) - 1) / 2, j;
    for (int i = 0; i <= limit; i++)
    {
        j = i;
        for (int k = 0; k < n; k++)
        {
            sum = ((j & 1) ? sum + arr[k] : sum - arr[k]);
            j >>= 1;
        }
        if (sum % 360 == 0)
        {
            cout << "YES" << endl;
            return 0;
        }
        sum = 0;
    }
    cout << "NO" << endl;

    return 0;
}