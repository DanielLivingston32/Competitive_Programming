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
        int n;
        cin >> n;
        ld b[n];
        bool possible = true;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];

            if (i > 0 and b[i - 1] % b[i] != 0)
            {
                possible = false;
            }
        }

        if (!possible)
        {
            cout << -1 << endl;
        }
        else
        {
            int i = 0;
            for (i; i < n; i++)
            {
                cout << b[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}