// We could also use a string and reverse here
#include <iostream>

using namespace std;

long calc(long n)
{
    long ans = 0;
    while (n)
    {
        ans = ans * 10 + (n % 10);
        n /= 10;
    }
    return ans;
}

int main()
{
    long n;
    cin >> n;
    cout << calc(n);
    return 0;
}