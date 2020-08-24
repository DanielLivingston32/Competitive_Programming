#include <iostream>
using namespace std;

long int binPow(int base, int expo)
{
    int a = base, ans = 1;
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
        int n;
        cin >> n;
        int cnt = 0, no = n, total_bit = 0;
        while (n)
        {
            cnt++;
            if (n & 1)
            {
                total_bit++;
            }
            n = n >> 1;
        }
        if (total_bit == 1)
        {
            cout << no << endl;
            continue;
        }
        cout << binPow(2, cnt) << endl;
    }
    return 0;
}