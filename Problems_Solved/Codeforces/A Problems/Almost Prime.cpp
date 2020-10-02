#include <iostream>

using namespace std;

int n = 3000, arr[3001] = {};

void sieve()
{
    for (int i = 2; i <= n; i++)
    {
        if (!(arr[i]))
        {
            for (long int j = 2 * i; j <= n; j += i)
            {
                arr[j]++;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    sieve();
    int res = 0;
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 2)
        {
            res++;
        }
    }
    cout << res << endl;
}
