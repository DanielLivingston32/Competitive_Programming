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
    int n;
    cin >> n;
    int a, b, c;
    cin >> a >> b >> c;
    string input;
    cin >> input;
    int o_a = 0, o_b = 0, o_c = 0;
    for (int i = 0; i < n; i++)
    {
        if (input[i] == 'R')
        {
            o_a++;
        }
        else if (input[i] == 'P')
        {
            o_b++;
        }
        else
        {
            o_c++;
        }
    }
    int rem_a = a - min(a, o_c);
    int rem_b = b - min(b, o_a);
    int rem_c = c - min(c, o_b);
    a -= rem_a;
    b -= rem_b;
    c -= rem_c;
    string output = "";
    int res = a + b + c;
    // Opposite placing
    for (int i = 0; i < n; i++)
    {
        if (input[i] == 'R')
        {
            if (b)
            {
                output += 'P';
                b--;
                continue;
            }
        }
        else if (input[i] == 'P')
        {
            if (c)
            {
                output += 'S';
                c--;
                continue;
            }
        }
        else
        {
            if (a)
            {
                output += 'R';
                a--;
                continue;
            }
        }
        output += ' ';
    }

    if (res < (n + 1) / 2)
    {
        cout << "NO" << endl;
        return;
    }

    // Remaining placing
    for (int i = 0; i < n; i++)
    {
        if (output[i] != ' ')
        {
            continue;
        }

        if (input[i] == 'R')
        {
            if (rem_a)
            {
                output[i] = 'R';
                rem_a--;
            }
            else
            {
                rem_c--;
                output[i] = 'S';
            }
        }
        else if (input[i] == 'P')
        {
            if (rem_b)
            {
                output[i] = 'P';
                rem_b--;
            }
            else
            {
                output[i] = 'R';
                rem_a--;
            }
        }
        else
        {
            if (rem_c)
            {
                output[i] = 'S';
                rem_c--;
            }
            else
            {
                output[i] = 'P';
                rem_b--;
            }
        }
    }

    cout << "YES\n"
         << output << endl;
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