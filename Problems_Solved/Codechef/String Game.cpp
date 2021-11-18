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
        string input;
        cin >> input;
        int z_cnt = 0;
        int o_cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (input[i] == '0')
            {
                z_cnt++;
            }
            else
            {
                o_cnt++;
            }
        }
        bool isAlice = true;
        if (z_cnt == 0 or o_cnt == 0)
        {
            isAlice = false;
        }
        else if (z_cnt == 1 or o_cnt == 1)
        {
            isAlice = true;
        }
        else
        {
            if (z_cnt % 2 == o_cnt % 2)
            {
                isAlice = false;
            }
        }

        if (isAlice)
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
    }

    return 0;
}