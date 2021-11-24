#include <bits/stdc++.h>

#define ll long long
#define ld long int
#define MOD 1000000007

using namespace std;

long long pow(long long base, long long n, long long m = MOD)
{

    long long ans = 1ll;
    while (n != 0)
    {
        if (n % 2)
        {
            ans = (ans * base) % m;
            n--;
        }
        else
        {
            base = (base * base) % m;
            n /= 2;
        }
    }
    return ans;
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
        ld l, r;
        ld o_o;
        ld e_e;
        ld o_e;
        for (int i = 0; i < n; i++)
        {
            cin >> l >> r;
            if (l & 1 and r & 1)
            {
                o_o++;
            }
            else if (l & 1 or r & 1)
            {
                o_e++;
            }
            else
            {
                e_e++;
            }
        }

        if (o_e == 0 and o_o == 0)
        {
            cout << 0;
        }
        else if (o_e == 0 and o_o)
        {
            if (n & 1)
            {
                cout << pow(2, n, MOD);
            }
            else
            {
                cout << 0;
            }
        }
        else
        {
            cout << pow(2, n - 1, MOD);
        }
        cout << endl;
    }

    return 0;
}