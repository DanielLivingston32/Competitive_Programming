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
        ld a, b, c;
        cin >> a >> b >> c;
        ld d = a + c - 2 * b;
        if (d % 3 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }

    return 0;
}