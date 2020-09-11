#include <iostream>

using namespace std;

void prime_sieve_calc(bool arr[], int prefix_sum_sieve[])
{
    for (long int i = 3; i < 1000000; i += 2)
    {
        arr[i] = 1;
    }
    for (long int i = 3; i < 1000000; i += 2)
    {
        if (arr[i])
        {
            for (long int j = i * i; j < 1000000; j += i)
            {
                arr[j] = 0;
            }
        }
    }
    arr[2] = 1;
    prefix_sum_sieve[0] = 0;
    for (long int i = 1; i < 1000000; i++)
    {
        prefix_sum_sieve[i] = prefix_sum_sieve[i - 1] + arr[i];
    }
}
int main()
{
    bool prime_sieve[1000000];
    int prefix_sum_sieve[1000000];
    prime_sieve_calc(prime_sieve, prefix_sum_sieve);
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a == 0)
        {
            cout << prefix_sum_sieve[b] << endl;
            continue;
        }
        cout << prefix_sum_sieve[b] - prefix_sum_sieve[a - 1] << endl;
        ;
    }

    return 0;
}