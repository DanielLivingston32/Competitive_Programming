#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    if (n == 2)
    {
        cout << "NO";
        return 0;
    }
    cout << (n & 1 ? "NO" : "YES");
    return 0;
}