#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, k;
        cin >> n >> k;
        long int mask = 1 << ((int)log2(n) + 1 - k);
        cout << (n & mask ? n ^ mask : n) << endl;
    }
    return 0;
}