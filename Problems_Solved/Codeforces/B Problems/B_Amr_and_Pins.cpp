#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    double r, x, y, X, Y;
    cin >> r >> x >> y >> X >> Y;
    double dist = sqrt((X - x) * (X - x) + (Y - y) * (Y - y));
    cout << ceil(dist / (2 * r));

    return 0;
}