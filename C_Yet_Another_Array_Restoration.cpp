#include <bits/stdc++.h>

#define ll long long
#define ld long int
#define vi vector<int>
#define pii pair<int, int>
#define pb push_back

using namespace std;

// 8""""8
// 8    " eeeee eeeee eeee
// 8e     8  88 8   8 8
// 88     8   8 8e  8 8eee
// 88   e 8   8 88  8 88
// 88eee8 8eee8 88ee8 88ee

// --------MATHS OPERATIONS---------

const int N = 2e5 + 1;
const int MOD = 1e9 + 7;
ll fact[N], inv[N], invfact[N];
void factInverse()
{
    fact[0] = inv[1] = fact[1] = invfact[0] = invfact[1] = 1;
    for (long long i = 2; i < N; i++)
    {
        fact[i] = (fact[i - 1] * i) % MOD;
        inv[i] = MOD - (inv[MOD % i] * (MOD / i) % MOD);
        invfact[i] = (inv[i] * invfact[i - 1]) % MOD;
    }
}

int add(int a, int b)
{
    if ((a += b) >= MOD)
        a -= MOD;
    else if (a < 0)
        a += MOD;
    return a;
}

ll mul(int x, int y)
{
    return (1LL * x * y) % MOD;
}

ll nCr(int n, int r)
{
    if (r > n)
        return 0;
    return mul(mul(fact[n], invfact[r]), invfact[n - r]);
}

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

// --------SOLVE---------

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    int diff = y - x;
    int cnt = 0;
    if (n >= diff + 1)
    {
        for (int i = x; i <= y; i++)
        {
            cout << i << " ";
            cnt++;
        }
        // Elements before x
        int temp = x - 1;
        while (cnt < n)
        {
            if (temp <= 0)
            {
                break;
            }
            cout << temp << " ";
            cnt++;
            temp--;
        }
        // Elements after y
        temp = y + 1;
        while (cnt < n)
        {
            cout << temp << " ";
            cnt++;
            temp++;
        }
    }
    else
    {
        int div = n - 1;
        while (div > 0)
        {
            if (diff % div == 0)
            {
                break;
            }
            div--;
        }
        int d = diff / div;
        cnt += div + 1;
        for (int i = x; i <= y; i += d)
        {
            cout << i << " ";
        }
        // Elements before x
        int temp = x - d;
        while (cnt < n)
        {
            if (temp <= 0)
            {
                break;
            }
            cout << temp << " ";
            cnt++;
            temp -= d;
        }
        // Elements after y
        temp = y + d;
        while (cnt < n)
        {
            cout << temp << " ";
            cnt++;
            temp += d;
        }
    }
    cout << endl;
}

// --------XXXXXXXXX---------

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}