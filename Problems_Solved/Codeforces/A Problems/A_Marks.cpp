#include <bits/stdc++.h>

#define ll long long
#define ld long int
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;

    string temp;
    vector<string> input(n);
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        input[i] = temp;
    }

    int res = 0;

    for (int i = 0; i < n; i++)
    {
        bool wasBest = false;
        for (int j = 0; j < m; j++)
        {
            bool isBest = true;
            for (int k = 0; k < n; k++)
            {
                if (input[k][j] > input[i][j])
                {
                    isBest = false;
                    break;
                }
            }
            if (isBest)
            {
                wasBest = true;
            }
        }
        if (wasBest)
        {
            res++;
        }
    }
    cout << res << endl;

    return 0;
}