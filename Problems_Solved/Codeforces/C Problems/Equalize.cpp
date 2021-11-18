#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int cnt = 0, i = 0;
    while (i < n)
    {
        if (a[i] == b[i])
        {
            i++;
        }
        else if (a[i + 1] != b[i + 1] and a[i + 1] != a[i])
        {
            cnt++;
            i += 2;
        }
        else
        {
            cnt++;
            i++;
        }
    }
    cout << cnt << endl;

    return 0;
}