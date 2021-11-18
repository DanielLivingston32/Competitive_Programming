#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007
#define limit 1e6 + 2

using namespace std;

void prime_sieve(vector<bool> &isPrime)
{
    isPrime[0] = 0;
    for (ll i = 2; i <= limit; i++)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j <= limit; j += i)
                isPrime[j] = 0;
        }
    }
}

int check_perfect_square(long long n)
{
    double sqrt_n = sqrt(n);
    if (sqrt_n == int(sqrt_n))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<bool> isPrime(limit, 1);
    prime_sieve(isPrime);
    int n;
    cin >> n;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        if (check_perfect_square(temp) == 1 && isPrime[int(sqrt(n))])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}