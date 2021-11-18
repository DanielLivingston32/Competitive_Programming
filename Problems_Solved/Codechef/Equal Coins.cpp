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
        ld x, y;
        cin >> x >> y;
        if (x & 1)
        {
            cout << "NO" << endl;
            continue;
        }
        if (!(y & 1) or x != 0)
        {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }

    return 0;
}