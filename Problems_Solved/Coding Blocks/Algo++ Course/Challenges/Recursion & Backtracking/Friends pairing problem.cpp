#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

ll friendsParing(int n)
{
    // Base case
    if (n <= 2)
    {
        return n;
    }
    return friendsParing(n - 1) + (n - 1) * friendsParing(n - 2);
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
        cout << friendsParing(n) << endl;
    }

    return 0;
}