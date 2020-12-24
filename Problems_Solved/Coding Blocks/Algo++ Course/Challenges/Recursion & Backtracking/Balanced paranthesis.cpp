#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

set<string> s;

void balancedParenthesis(char *output, int n, int i, int cnt_open, int cnt_close)
{
    // Base case
    if (cnt_open + cnt_close == 2 * n)
    {
        output[i] = '\0';
        string temp(output);
        s.insert(temp);
        return;
    }

    // Recursive Case
    // Add open bracket
    if (cnt_open < n)
    {
        output[i] = '(';
        balancedParenthesis(output, n, i + 1, cnt_open + 1, cnt_close);
    }
    //Add close bracket
    if (cnt_close < cnt_open)
    {
        output[i] = ')';
        balancedParenthesis(output, n, i + 1, cnt_open, cnt_close + 1);
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    char arr[(2 * n) + 1];

    balancedParenthesis(arr, n, 0, 0, 0);

    for (auto rit = s.rbegin(); rit != s.rend(); rit++)
    {
        cout << *rit << endl;
    }
    return 0;
}