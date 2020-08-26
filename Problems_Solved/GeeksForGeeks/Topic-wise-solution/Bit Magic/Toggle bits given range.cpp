#include <iostream>
using namespace std;

long int binPow(int base, int expo)
{
    int ans = 1, a = base;
    while (expo)
    {
        if (expo & 1)
        {
            ans *= a;
        }
        a *= a;
        expo = expo >> 1;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        int mask = (binPow(2, r - l + 1) - 1) << l - 1;
        cout << (n ^ mask) << endl;
    }
    return 0;
}