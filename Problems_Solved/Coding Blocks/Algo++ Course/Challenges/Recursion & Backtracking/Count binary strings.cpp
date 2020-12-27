#include <bits/stdc++.h>

using namespace std;

long long cntBinaryStrings(int n)
{
    long long count[n + 1];
    count[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i <= 2)
        {
            count[i] = i + 1;
        }
        else
        {
            count[i] = count[i - 1] + count[i - 2];
        }
    }
    return count[n];
}

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
        cout << cntBinaryStrings(n) << endl;
    }

    return 0;
}