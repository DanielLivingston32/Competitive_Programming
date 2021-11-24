#include <bits/stdc++.h>

#define ll long long
#define ld long int
#define MOD 1000000007

using namespace std;

void fillByO(ld n, int k)
{
    cout << "YES" << endl;
    for (int i = 0; i < k - 1; i++)
    {
        cout << 1 << " ";
    }
    cout << n - (k - 1);
}

void fillByT(ld n, int k)
{
    cout << "YES" << endl;
    for (int i = 0; i < k - 1; i++)
    {
        cout << 2 << " ";
    }
    cout << n - 2 * (k - 1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ld n;
        cin >> n;
        int k;
        cin >> k;
        ld temp;
        if (n == k)
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << 1 << " ";
            }
        }
        else if (n % k == 0)
        {
            cout << "YES" << endl;
            temp = n / k;
            for (int i = 0; i < k; i++)
            {
                cout << temp << " ";
            }
        }
        else if (k > n)
        {
            cout << "NO";
        }
        else if (n & 1 and k & 1)
        {
            fillByO(n, k);
        }
        else if ((n & 1) == 0 and (k & 1) == 0)
        {
            fillByO(n, k);
        }
        else if ((n & 1) == 0 and 2 * k <= n)
        {
            fillByT(n, k);
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }

    return 0;
}