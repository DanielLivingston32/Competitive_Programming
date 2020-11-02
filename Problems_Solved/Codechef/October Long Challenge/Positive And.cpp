#include <bits/stdc++.h>

#define ll long long

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
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        if (__builtin_popcount(n) == 1)
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            cout << "2 3 1 ";
            for (int i = 4; i <= n; i++)
            {
                if (__builtin_popcount(i) == 1)
                {
                    cout << i + 1 << " " << i << " ";
                    i++;
                }
                else
                {
                    cout << i << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}