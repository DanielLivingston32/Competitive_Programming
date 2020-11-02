#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;
    ll arr[10000], i = 1;
    // for 0 games, 1 player is needed
    // for 1 game, 2 players are required
    arr[0] = 1;
    arr[1] = 2;
    while (arr[i++] <= n)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    cout << i - 2 << endl;
    return 0;
}