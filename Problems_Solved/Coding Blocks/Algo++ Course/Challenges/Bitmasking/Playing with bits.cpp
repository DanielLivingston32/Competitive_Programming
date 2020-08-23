#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int start, end;
        cin >> start >> end;
        int ans = 0;
        for (int i = start; i <= end; i++)
        {
            int n = i;
            while (n)
            {
                ans += n & 1;
                n = n >> 1;
            }
        }
        cout << ans << endl;
    }
}