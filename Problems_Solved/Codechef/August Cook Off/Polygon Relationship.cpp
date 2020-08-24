#include <iostream>

using namespace std;

long int ans(long int n)
{
    if (n >= 6)
    {
        return n + ans(n / 2);
    }
    else
    {
        return n;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;
        long int temp;
        for (long int i = 0; i < n; i++)
        {
            cin >> temp;
            cin >> temp;
        }
        cout << ans(n) << endl;
    }
}