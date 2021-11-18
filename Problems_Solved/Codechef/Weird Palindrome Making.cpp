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
        ld n;
        cin >> n;
        ld arr[n];
        ld o_count = 0, e_count = 0;
        for (ld i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] & 1)
            {
                o_count++;
            }
            else
            {
                e_count++;
            }
        }
        if (n == 1)
        {
            cout << "0" << endl;
            continue;
        }
        cout << max(o_count / 2, (ld)0) << endl;
    }

    return 0;
}