#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;
        long int checkmask = log2(n) + 1;
        if (__builtin_popcountl(n) != checkmask)
        {
            cout << (n | (n + 1)) << endl;
        }
        else
        {
            cout << n << endl;
        }
    }
    return 0;
}