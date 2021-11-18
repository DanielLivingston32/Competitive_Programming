#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m, k;
    cin >> n >> m >> k;
    int check;

    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    cin >> check;
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        ans += (__builtin_popcount(arr[i] ^ check) <= k ? 1 : 0);
    }
    cout << ans;

    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> c4110ae6e806a3628ddb580b1dc27e48c4c652ac
