#include <iostream>
#include <math.h>
using namespace std;

long int binPow(int base, int expo)
{
    long int a = base, ans = 1;
    while (expo)
    {
        if (expo & 1)
        {
            ans *= a;
        }
        a *= a;
        expo >>= 1;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned int n;
        cin >> n;
        cout << (n ^ (binPow(2, log2(n) + 1) - 1)) << endl;
    }
    return 0;
}