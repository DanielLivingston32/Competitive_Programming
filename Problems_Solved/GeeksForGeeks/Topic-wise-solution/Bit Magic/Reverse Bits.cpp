#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, ans = 0;
        cin >> n;
        int cnt = 0;
        while (n)
        {
            cnt++;
            ans = ans << 1;
            ans |= (n & 1);
            n = n >> 1;
        }
        while (cnt < 32)
        {
            ans = ans << 1;
            cnt++;
        }
        cout << ans << endl;
    }
    return 0;
}