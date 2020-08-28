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
        int res, temp;
        cin >> res;
        for (int i = 1; i < n; i++)
        {
            cin >> temp;
            res ^= temp;
            cout << res << " ";
            res = temp;
        }
        cout << res << endl;
    }
    return 0;
}