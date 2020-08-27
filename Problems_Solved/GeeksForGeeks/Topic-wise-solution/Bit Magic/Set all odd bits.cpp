#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, temp;
        cin >> n;
        temp = n;
        int cnt = 0;
        while (temp)
        {
            if (cnt % 2 == 0)
            {
                n |= 1 << cnt;
            }
            cnt++;
            temp >>= 1;
        }
        cout << n << endl;
    }
    return 0;
}