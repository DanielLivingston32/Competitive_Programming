#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int temp;
    unordered_map<int, int> home, guest;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        home[temp]++;
        cin >> temp;
        guest[temp]++;
    }

    int ans = 0;
    for (auto x : home)
    {
        ans += guest[x.first] * x.second;
    }

    cout << ans << endl;

    return 0;
}