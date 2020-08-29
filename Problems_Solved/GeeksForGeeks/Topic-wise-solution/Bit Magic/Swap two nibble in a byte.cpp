#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned int n;
        cin >> n;
        unsigned int ans = ((n << 4) | (n >> 4)) & 255;
        cout << ans << endl;
    }
    return 0;
}