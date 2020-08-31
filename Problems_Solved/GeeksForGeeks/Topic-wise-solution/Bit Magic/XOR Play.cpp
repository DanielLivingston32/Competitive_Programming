#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, result = 0;
        cin >> n;
        vector<int> primes;
        for (long int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                primes.push_back(i);
                result ^= i;
                if ((n / i) != i && i != 1)
                {
                    primes.push_back(n / i);
                    result ^= (n / i);
                }
            }
        }
        sort(primes.begin(), primes.end());
        for (int i = 0; i < primes.size(); i++)
        {
            cout << primes[i] << " ";
        }
        cout << endl
             << result << endl;
    }
    return 0;
}