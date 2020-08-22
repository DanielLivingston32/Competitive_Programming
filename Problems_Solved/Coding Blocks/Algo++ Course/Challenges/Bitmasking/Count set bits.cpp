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
        int ans = 0;
        while (n)
        {
            ans += n & 1;
            n = n >> 1;
        }
        cout << ans << endl;
    }
}