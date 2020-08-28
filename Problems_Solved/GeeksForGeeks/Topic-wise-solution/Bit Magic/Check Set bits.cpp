#include <iostream>
#include <math.h>
using namespace std;

long int binPow(int base, int expo)
{
    long int a = base, ans = 1;
    while (expo)
    {
        ans *= ((expo & 1) ? a : 1);
        expo >>= 1;
        a *= a;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << ((n ^ (binPow(2, log2(n) + 1) - 1)) ? "NO" : "YES") << endl;
    }
    return 0;
}