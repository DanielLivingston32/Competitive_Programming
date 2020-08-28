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
        int res = 0, temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            res ^= temp;
        }
        cout << res << endl;
    }
    return 0;
}