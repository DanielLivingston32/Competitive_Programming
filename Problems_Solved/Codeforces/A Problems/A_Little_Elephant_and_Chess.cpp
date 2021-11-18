#include <bits/stdc++.h>

#define ll long long
#define ld long int
#define MOD 1000000007

using namespace std;

bool check(string input)
{
    int k = 0;
    string checkStr = "WBWBWBWBW";

    if (input[0] == 'B')
    {
        k = 1;
    }

    for (int j = 0; j < input.size(); k++, j++)
    {
        if (checkStr[k] != input[j])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string input;
    bool possible = true;

    for (int i = 0; i < 8; i++)
    {
        cin >> input;
        if (!check(input))
        {
            possible = false;
        }
    }
    if (possible)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}