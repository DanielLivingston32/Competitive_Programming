#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n & 1)
        {
            cout << 0 << endl;
        }
        else
        {
            int cnt = 0;
            while ((n & 1) == 0)
            {
                cnt++;
                n /= 2;
            }
            cout << cnt << endl;
        }
    }
    return 0;
}