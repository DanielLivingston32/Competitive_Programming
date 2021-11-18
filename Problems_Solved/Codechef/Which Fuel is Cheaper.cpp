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
        int x, y, a, b, k;
        cin >> x >> y >> a >> b >> k;
        a *= k;
        b *= k;
        x += a;
        y += b;
        if (x == y)
        {
            cout << "SAME PRICE";
        }
        else if (x < y)
        {
            cout << "PETROL";
        }
        else
        {
            cout << "DIESEL";
        }
        cout << endl;
    }

    return 0;
}