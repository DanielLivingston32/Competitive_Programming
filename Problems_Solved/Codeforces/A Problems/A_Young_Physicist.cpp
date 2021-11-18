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
    int x = 0, y = 0, z = 0;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        x += temp;
        cin >> temp;
        y += temp;
        cin >> temp;
        z += temp;
    }
    int result = max(max(x, y), z);
    cout << (result == 0 ? "YES" : "NO");

    return 0;
}