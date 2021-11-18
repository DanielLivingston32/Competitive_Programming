#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, m;
    cin >> n >> m;
    ll quotient = n / m;
    ll remainder = n % m;
    ll finalPair = quotient + 1;

    cout << (((quotient * (quotient - 1)) / 2) * (m - remainder) + ((finalPair * (finalPair - 1)) / 2) * remainder) << " " << (((n - (m - 1)) * (n - (m - 1) - 1)) / 2) << endl;

    return 0;
}