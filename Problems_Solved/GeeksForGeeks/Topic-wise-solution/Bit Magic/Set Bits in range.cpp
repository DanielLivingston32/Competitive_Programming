#include <iostream>
using namespace std;

unsigned int binPow(unsigned int base, unsigned int expo)
{
    unsigned int a = base, ans = 1;
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
        unsigned long n, mask = 0;
        int l, r;
        cin >> n >> l >> r;
        cout << (n | (binPow(2, r - l + 1) - 1 << l - 1)) << endl;
    }
    return 0;
}