#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long int n, m;
    cin >> n >> m;
    long int temp;
    ll ans = 0;
    long int initial = 1;
    for (long int i = 0; i < m; i++)
    {
        cin >> temp;
        if (initial > temp)
        {
            ans += (n - initial) + temp;
        }
        else
        {
            ans += temp - initial;
        }
        initial = temp;
    }
    cout << ans;

    return 0;
}
