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
        ld n, k;
        cin >> n >> k;
        ll calc = ((k / (n - 1)) * n);
        ld rem = k % (n - 1);
        if (rem == 0)
        {
            calc--;
        }
        else
        {
            calc += rem;
        }
        cout << calc << endl;
    }

    return 0;
}