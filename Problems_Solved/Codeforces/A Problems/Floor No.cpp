#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if (n <= 2)
        {
            cout << 1 << endl;
            continue;
        }
        else
        {
            int ans = ((n - 2) / x) + 1;
            ans += ((n - 2) % x ? 1 : 0);
            cout << ans << endl;
        }
    }

    return 0;
}
