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
        int n, m;
        cin >> n >> m;
        bool check = false;
        bool res = false;
        int temp, temp2, j = 0;
        for (int i = 0; i < (4 * n); i++)
        {
            cin >> temp;
            if (4 * j + 1 == i || check)
            {
                if (4 * j + 1 == i)
                {
                    check = true;
                    temp2 = temp;
                    j++;
                }
                else
                {
                    check = false;
                    if (temp2 == temp)
                    {
                        res = true;
                    }
                }
            }
        }
        // cout<<res<<" "<<m<<endl;
        if (res && (m % 2 == 0))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}