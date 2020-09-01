#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, res = 0;
        cin >> n;
        while (n)
        {
            res ^= n;
            n >>= 1;
        }
        cout << res << endl;
    }
    return 0;
}