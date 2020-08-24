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
        int no = n, cnt = 0;
        while (no)
        {
            cnt++;
            no = no >> 1;
        }
        long int res = binPow(2, cnt) - 1;
        cout << res - n << " " << res << endl;
    }
    return 0;
}