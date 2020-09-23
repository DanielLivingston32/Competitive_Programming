#include <iostream>
#include <bitset>
#include <vector>
#define ll long long

using namespace std;

bitset<10000005> b;
ll n = 10000000;
vector<ll> primes;

void sieve()
{
    // To set all bits
    b.set();
    for (ll i = 2; i <= n; i += 2)
    {
        b[i] = 0;
    }
    primes.push_back(2);
    b[0] = b[1] = 0;
    for (ll i = 3; i <= n; i += 2)
    {
        if (b[i])
        {
            primes.push_back(i);
            for (ll j = i * i; j <= n; j += i)
            {
                b[j] = 0;
            }
        }
    }
}

ll isPrime(ll no)
{
    if (no <= n)
    {
        return b[no];
    }
    else
    {
        for (ll i = 0; primes[i] * primes[i] <= no; i++)
        {
            if (no % primes[i] == 0)
            {
                return false;
            }
        }
        return true;
    }
}

int main()
{
    int q;
    cin >> q;
    sieve();
    ll temp;
    for (int i = 0; i < q; i++)
    {
        cin >> temp;
        cout << (isPrime(temp) ? "Is Prime" : "Not a Prime");
    }
    cout << endl;
}