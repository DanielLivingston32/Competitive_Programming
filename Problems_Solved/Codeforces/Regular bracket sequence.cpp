#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

bool checkSequence(string input)
{
    // Odd case
    if (input.length() % 2 == 1)
    {
        return false;
    }

    // Even case
    int bracket_score = 0;
    for (auto i : input)
    {
        if (i == '(')
        {
            bracket_score++;
        }
        if (i == ')')
        {
            bracket_score--;
        }
        if (i == '?')
        {
            bracket_score = (bracket_score <= 0 ? bracket_score + 1 : bracket_score - 1);
        }

        if (bracket_score < 0)
        {
            return false;
        }
    }
    if (bracket_score == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    string input;
    while (t--)
    {
        cin >> input;
        cout << (checkSequence(input) ? "YES" : "NO") << endl;
    }

    return 0;
}