#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (!(n & 1))
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            int res = 0;
            for (int i = 0; i < n; i += 2)
            {
                res ^= arr[i];
            }
            cout << res << endl;
        }
    }
}
