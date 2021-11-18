#include <bits/stdc++.h>

#define ll long long
#define ld long int
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m, a, b;
    cin >> n >> m >> a >> b;

    double m_val = b / m;
    int rem;
    int cost = 0;
    if (m_val < a)
    {
        cost += b * (n / m);
        rem = n % m;
        cost += (a * rem < b ? a * rem : b);
    }
    else
    {
        cost += a * n;
    }
    cout << cost << endl;

    return 0;
}