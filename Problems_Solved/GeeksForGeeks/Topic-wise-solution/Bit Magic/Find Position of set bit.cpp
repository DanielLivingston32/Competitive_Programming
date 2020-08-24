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
        if (total_bit > 1)
        {
            cout << -1 << endl;
            continue;
        }
        cout << cnt << endl;
    }
    return 0;
}