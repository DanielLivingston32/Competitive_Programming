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
        int n, x;
        cin >> n >> x;
        int cnt_o = 0, cnt_e = 0;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (temp & 1)
            {
                cnt_o++;
            }
            else
            {
                cnt_e++;
            }
        }
        // Only Even
        if (cnt_o == 0)
        {
            cout << "No";
        }
        // Only Odd
        else if (cnt_e == 0)
        {
            if (x & 1)
            {
                cout << "Yes";
            }
            else
            {
                cout << "No";
            }
        }
        // Odd & Even
        else if (x == n and (cnt_o & 1) == 0)
        {
            cout << "No";
        }
        else
        {
            // cout << cnt_o << " " << cnt_e << " " << n << endl;
            cout << "Yes";
        }
        cout << endl;
    }

    return 0;
}