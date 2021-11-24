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
    string input;
    cin >> input;
    int len = input.length();
    int i = n - 1;
    while (i >= 0)
    {
        if (i - 1 >= 0 and input[i] == '0' and input[i - 1] == '1')
        {
            int cnt_0 = 0;
            int j = i;
            len = input.length();
            while (j < len)
            {
                if (input[j] == '0')
                {
                    cnt_0++;
                    j++;
                    continue;
                }
                break;
            }
            int cnt_1 = 0;
            j = i - 1;
            len = input.length();
            while (j >= 0)
            {
                if (input[j] == '1')
                {
                    cnt_1++;
                    j--;
                    continue;
                }
                break;
            }
            while (cnt_1 and cnt_0)
            {
                if (cnt_1 >= cnt_0)
                {
                    input.erase(input.begin() + i - 1);
                    i = i - 1;
                    cnt_1--;
                }
                else
                {
                    input.erase(input.begin() + i);
                    cnt_0--;
                }
            }
        }
        i--;
    }
    cout << input << endl;
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