#include <iostream>

bool isPrime(long int n)
{
    if (n < 2)
    {
        return false;
    }
    else if (n % 2 == 0 && n != 2)
    {
        return false;
    }
    else
    {
        for (long int i = 3; i * i <= n; i += 2)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}

using namespace std;

int main()
{
    long int n;
    cin >> n;
    cout << (isPrime(n) ? "Prime" : "Not Prime") << endl;
    return 0;
}