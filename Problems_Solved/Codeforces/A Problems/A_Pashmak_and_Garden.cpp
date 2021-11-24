#include <bits/stdc++.h>

#define ll long long
#define ld long int
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if (x1 != x2 and y1 != y2 and abs(x2 - x1) != abs(y2 - y1))
    {
        cout << -1;
    }
    else if (x1 == x2)
    {
        cout << x1 + abs(y2 - y1) << " " << y1 << " " << x2 + abs(y2 - y1) << " " << y2;
    }
    else if (y1 == y2)
    {
        cout << x1 << " " << y1 + abs(x2 - x1) << " " << x2 << " " << y2 + abs(x2 - x1);
    }
    else
    {
        cout << x1 << " " << y2 << " " << x2 << " " << y1;
    }

    return 0;
}