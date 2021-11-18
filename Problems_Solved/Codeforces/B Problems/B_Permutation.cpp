#include <bits/stdc++.h>

#define ll long long
#define ld long int
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    bool arr[n + 1] = {false};
    int temp;
    for (int i = 1; i <= n; i++)
    {
        cin >> temp;
        if (temp > n)
        {
            continue;
        }
        arr[temp] = true;
    }
    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!arr[i])
        {
            res++;
        }
    }
    cout << res << endl;

    return 0;
}