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
        int o_cnt = 0, z_cnt = 0;
        string input;
        cin >> input;
        for (int i = 0; i < n; i++)
        {
            z_cnt += (input[i] == '0' ? 1 : 0);
        }

        vector<int> result;

        for (int i = 0; i < z_cnt; i++)
        {
            if (input[i] == '1')
            {
                result.push_back(i);
            }
        }

        for (int i = z_cnt; i < n; i++)
        {
            if (input[i] == '0')
            {
                result.push_back(i);
            }
        }
        if (result.empty())
        {
            cout << "0";
        }
        else
        {
            cout << "1" << endl;
            cout << result.size() << " ";
            for (int i = 0; i < result.size(); i++)
            {
                cout << result[i] + 1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}