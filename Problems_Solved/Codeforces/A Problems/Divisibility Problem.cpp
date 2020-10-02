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
        ll a, b;
        cin >> a >> b;
        cout << a - (a % b) << endl;
    }

    return 0;
}
