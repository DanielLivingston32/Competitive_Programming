#include <bits/stdc++.h>

#define ll long long
#define ld long int
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        ll u, v;
        cin >> u >> v;
        cout << -((ll)u * u) << " " << ((ll)v * v) << endl;
    }
}