#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        else
        {
            cout << ((__builtin_popcount(n) == 2 && (n & 1)) ? 1 : 0) << endl;
        }
    }
    return 0;
}