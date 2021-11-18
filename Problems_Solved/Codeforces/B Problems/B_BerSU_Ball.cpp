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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m;
    cin >> m;
    vector<int> b(m);

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int result = 0;
    int i = 0;
    int j = 0;
    int calc;
    while (i < n and j < m)
    {
        calc = abs(a[i] - b[j]);

        if (calc == 1 or calc == 0)
        {
            // cout << a[i] << " " << b[i] << endl;
            result++;
            i++;
            j++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    cout << result;

    return 0;
}