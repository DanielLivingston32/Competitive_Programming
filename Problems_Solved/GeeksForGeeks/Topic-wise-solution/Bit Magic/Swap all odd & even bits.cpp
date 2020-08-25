#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned int n, res_odd = 0, res_even = 0;
        cin >> n;
        int cnt = 0;
        while (cnt < 8)
        {
            if (cnt % 2 == 0)
            {
                res_odd |= ((n & 1) << cnt + 1);
            }
            else
            {
                res_even |= ((n & 1) << cnt - 1);
            }
            cnt++;
            n = n >> 1;
        }
        cout << (res_odd | res_even) << endl;
    }
    return 0;
}