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
        string a;
        string b;
        bool highestA = false;
        cin >> input;
        // First digit
        int val = input[0] - '0';
        if (val == 0)
        {
            a += '2';
            b += '1';
            highestA = true;
        }
        else if (val == 1)
        {
            a += '2';
            b += '2';
        }
        else
        {
            a += '1';
            b += '1';
        }

        for (int i = 1; i < input.size(); i++)
        {
            val = input[i] - '0';
            if (val == 0)
            {
                a += '0';
                b += '0';
            }
            else if (val == 1)
            {
                if (!highestA)
                {
                    a += '1';
                    b += '0';
                    highestA = true;
                    continue;
                }
                a += '0';
                b += '1';
            }
            else
            {
                if (!highestA)
                {
                    a += '1';
                    b += '1';
                    continue;
                }
                a += '0';
                b += '2';
            }
        }
        cout << a << endl
             << b << endl;
    }

    return 0;
}