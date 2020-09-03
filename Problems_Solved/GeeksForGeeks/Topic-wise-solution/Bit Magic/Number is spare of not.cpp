#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0;
        cin >> n;
        while (n)
        {
            n = n & (n << 1);
            cnt++;
        }
        cout << (cnt < 2 ? 1 : 0) << endl;
    }
    return 0;
}