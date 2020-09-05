#include <iostream>
using namespace std;

int main()
{
    long int n, m, x, y;
    cin >> n >> m >> x >> y;
    long int start = 0, end = n, mid, ans = 0;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (((n - mid) * y + m) >= (x * mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}