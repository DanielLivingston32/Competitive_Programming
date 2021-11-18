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
        string input;
        cin >> input;
        bool two = false;
        bool three = false;
        bool four = false;
        bool seven = false;
        vector<ld> a_pos;
        for (int i = 0; i < input.size(); i++)
        {
            if (input[i] == 'a')
            {
                a_pos.push_back(i);
            }
        }

        if (a_pos.size() <= 1)
        {
            cout << -1 << endl;
            continue;
        }

        for (int j = 1; j < a_pos.size(); j++)
        {
            if (a_pos[j] - a_pos[j - 1] == 1)
            {
                two = true;
            }
            else if (a_pos[j] - a_pos[j - 1] == 2)
            {
                three = true;
            }
            else if (a_pos[j] - a_pos[j - 1] == 3)
            {
                if (input[a_pos[j - 1] + 1] != input[a_pos[j] - 1])
                {
                    four = true;
                }
                else
                {
                    if (j + 1 < a_pos.size())
                    {
                        if (a_pos[j + 1] - a_pos[j] == 3)
                        {
                            if (input[a_pos[j] + 1] == input[a_pos[j + 1] - 1])
                            {
                                if (input[a_pos[j] + 1] != input[a_pos[j - 1] + 1])
                                {
                                    seven = true;
                                }
                            }
                        }
                    }
                }
            }
        }
        if (two)
            cout << 2 << endl;
        else if (three)
            cout << 3 << endl;
        else if (four)
            cout << 4 << endl;
        else if (seven)
            cout << 7 << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}