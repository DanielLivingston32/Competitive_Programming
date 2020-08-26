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
        int temp, ans = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            ans &= temp;
        }
        cout << ans << endl;
    }
    return 0;
}