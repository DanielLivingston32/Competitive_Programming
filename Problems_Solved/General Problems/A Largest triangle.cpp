#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    map<ll, int> hashmap;
    while (t--)
    {
        int n, m;
        ll temp;
        cin >> n >> m;
        for (int i = 0; i < n + m; i++)
        {
            cin >> temp;
            hashmap[temp]++;
        }
        ll min_e = LONG_MAX, max_e = 0;
        for (auto x : hashmap)
        {
            if (x.second == 2)
            {
                min_e = min(x.first, min_e);
                max_e = max(x.first, max_e);
            }
        }
        if (max_e == 0)
        {
            cout << max_e << endl;
        }
        else
        {
            cout << max_e - min_e << endl;
        }
        hashmap.clear();
    }

    return 0;
}