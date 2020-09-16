#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        int primes[] = {2, 3, 5, 7, 11, 13, 17, 19};
        ll noOfSubsets = (1 << 8) - 1;
        ll res = 0;

        for (ll i = 1; i <= noOfSubsets; i++)
        {

            ll denom = 1ll;
            int cnt = 0, noOfdemons = 0;
            ll mask = 1;
            while (mask <= i)
            {
                if (i & mask)
                {
                    denom *= primes[cnt];
                    noOfdemons++;
                }
                mask = mask << 1;
                cnt++;
            }
            if (noOfdemons & 1)
            {
                res += n / denom;
            }
            else
            {
                res -= n / denom;
            }
        }
        cout << res << endl;
    }
    return 0;
}