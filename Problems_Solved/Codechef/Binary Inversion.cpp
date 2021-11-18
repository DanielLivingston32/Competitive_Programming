#include <bits/stdc++.h>

#define ll long long
#define ld long int
#define MOD 1000000007

using namespace std;

ld findInversion(string a)
{
    ld z_cnt = 0;
    ld inversion = 0;
    for (ld i = a.length() - 1; i >= 0; i--)
    {
        if (a[i] == '0')
        {
            z_cnt++;
        }
        else
        {
            inversion += z_cnt;
        }
    }
    return inversion;
}

bool comp(pair<string, ld> a, pair<string, ld> b)
{

    string x = a.first;
    string y = b.first;

    return findInversion(x + y) < findInversion(y + x);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        ld n, m;
        cin >> n >> m;
        vector<pair<string, ld>> arr;
        string temp;
        for (ld i = 0; i < n; i++)
        {
            cin >> temp;
            ld z_cnt = 0;
            for (ld i = m - 1; i >= 0; i--)
            {
                if (temp[i] == '0')
                {
                    z_cnt++;
                }
            }
            if (z_cnt == 0 or z_cnt == m)
            {
                continue;
            }
            arr.push_back(make_pair(temp, z_cnt));
        }
        sort(arr.begin(), arr.end(), comp);

        ld z_cnt = 0;
        ld result = 0;
        for (ld i = arr.size() - 1; i >= 0; i--)
        {
            temp = arr[i].first;
            for (ld j = m - 1; j >= 0; j--)
            {
                if (temp[j] == '0')
                {
                    z_cnt++;
                }
                else
                {
                    result += z_cnt;
                }
            }
            // cout << temp << endl;
        }
        cout << result << endl;
        // cout << endl
        //      << endl;
    }
    return 0;
}