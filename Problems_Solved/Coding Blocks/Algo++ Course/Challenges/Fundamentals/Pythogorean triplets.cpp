#include <iostream>

using namespace std;

int main()
{
    long int n;
    cin >> n;
    if (n == 1 || n == 2)
    {
        cout << "-1";
        return 0;
    }
    if (n % 2 == 0)
    {
        long int m = n / 2;
        cout << m * m - 1 << " " << m * m + 1;
    }
    else
    {
        long int m = (n + 1) / 2;
        long int t = (n - 1) / 2;
        cout << 2 * m * t << " " << m * m + t * t;
    }
}