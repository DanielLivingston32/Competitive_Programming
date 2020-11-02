// Unlike the recursive approach in this we use loops.
#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll binaryExponentation(ll base, ll expo)
{
    ll pow = base, ans = 1;
    while (expo)
    {
        if (expo & 1)
        {
            ans *= pow;
        }
        pow *= pow;
        expo >>= 1;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll base, expo;
    cout << "Enter Base and Exponent" << endl;
    cin >> base >> expo;
    cout << binaryExponentation(base, expo);
    return 0;
}