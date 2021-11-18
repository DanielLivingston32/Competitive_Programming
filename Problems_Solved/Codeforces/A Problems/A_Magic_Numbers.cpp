#include <bits/stdc++.h>

#define ll long long
#define ld long int
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string input;
    cin >> input;

    bool possible = true;
    int i = 0;
    int n = input.size();
    while (i < n)
    {
        // Check 144 case
        if (i + 2 < n)
        {
            if (input[i] == '1' and input[i + 1] == '4' and input[i + 2] == '4')
            {
                i += 3;
                continue;
            }
        }
        // Check 14 case
        if (i + 1 < n)
        {
            if (input[i] == '1' and input[i + 1] == '4')
            {
                i += 2;
                continue;
            }
        }
        // Check 1 case
        if (input[i] == '1')
        {
            i++;
            continue;
        }
        possible = false;
        break;
    }

    if (possible)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}