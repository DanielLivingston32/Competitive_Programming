// #include <bits/stdc++.h>

// #define ll long long
// #define ld long int
// #define MOD 1000000007

// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     for (int i = 1; i <= 10; i++)
//     {
//         for (int j = 1; j <= 10; j++)
//         {
//             for (int k = 1; k <= 10; k++)
//             {
//                 if (((i ^ j) ^ k) == 0)
//                 {
//                     cout << i << " " << j << " " << k << endl;
//                 }
//             }
//         }
//     }

// int t;
// cin >> t;
// while (t--)
// {
//     ld n;
//     cin >> n;
//     ll arr[n];
//     ll xor_sum = 0;
//     for (ld i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         xor_sum ^= arr[i];
//     }
//     if (xor_sum % n == 0)
//     {
//         ll result = xor_sum / n;
//         for()
//         cout << result << endl;
//         continue;
//     }
//     cout << -1 << endl;
// }

//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n, 0);
        for (ll i = 0; i < n; i++)
            cin >> arr[i];
        ll ans = 0;
        for (ll j = 0; j <= 61; j++)
        {
            ll one = 0;
            for (ll i = 0; i < n; i++)
                if ((1ll << j) & arr[i])
                    one++;
            if (one % 2 == 0)
                continue;
            if (j == 61)
            {
                ans = -1;
                break;
            }
            ans += (1ll << j);
            for (ll i = 0; i < n; i++)
                arr[i] += (1ll << j);
        }
        cout << ans << endl;
    }
}