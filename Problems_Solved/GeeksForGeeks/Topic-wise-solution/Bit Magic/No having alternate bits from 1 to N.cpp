#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i = 1, cnt = 0;
        cin >> n;
        while (i <= n)
        {
            cout << i << " ";
            i <<= 1;
            if (cnt % 2 == 1)
            {
                i |= 1;
            }
            cnt++;
        }
        cout << endl;
    }
    return 0;
}