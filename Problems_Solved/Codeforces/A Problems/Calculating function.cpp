#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    cout << (n & 1 ? (n - 1) / 2 - n : n / 2);

    return 0;
}
