#include <bits/stdc++.h>

#define ll long long
#define ld long int
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        ld calc = (n * m);
        if (calc % 3 == 0)
        {
            cout << calc / 3;
        }
        else
        {
            cout << calc / 3 + 1;
        }
        cout << endl;
    }

    return 0;
}