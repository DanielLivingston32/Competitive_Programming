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
    vector<ld> even;
    vector<ld> odd;
    ld temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp & 1)
        {
            odd.pb(temp);
        }
        else
        {
            even.pb(temp);
        }
    }
    sort(even.begin(), even.end(), greater<int>());
    sort(odd.begin(), odd.end(), greater<int>());
    int i = 0, j = 0;
    int o_length = odd.size();
    int e_length = even.size();
    ll a_sum = 0;
    ll b_sum = 0;
    bool isAlice = true;
    while (i < e_length and j < o_length)
    {
        if (isAlice)
        {
            if (even[i] > odd[j])
            {
                a_sum += even[i];
                i++;
            }
            else
            {
                j++;
            }
        }
        else
        {
            if (odd[j] > even[i])
            {
                b_sum += odd[j];
                j++;
            }
            else
            {
                i++;
            }
        }
        isAlice = !isAlice;
    }
    while (i < e_length)
    {
        if (isAlice)
        {

            a_sum += even[i];
            i++;
        }
        else
        {

            i++;
        }
        isAlice = !isAlice;
    }
    while (j < o_length)
    {
        if (isAlice)
        {
            j++;
        }
        else
        {

            b_sum += odd[j];
            j++;
        }
        isAlice = !isAlice;
    }
    if (a_sum == b_sum)
    {
        cout << "Tie";
    }
    else if (a_sum > b_sum)
    {
        cout << "Alice";
    }
    else
    {
        cout << "Bob";
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