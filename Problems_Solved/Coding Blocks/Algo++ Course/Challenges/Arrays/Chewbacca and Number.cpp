// Intution here was to change the no greater than 5 as 9 - no..
// There is one edge case here that is when the first digit becomes 9 our algo changes it to zero which shouldn't happen
// So for this i have added a if loop to check this case..
#include <iostream>

using namespace std;

int main()
{
    unsigned long long x, y, ans = 0;
    cin >> x;
    y = x;
    long long pow = 1;
    while (y)
    {
        int temp = y % 10;
        // Edge case ...
        if (temp == 9 && y / 10 == 0)
        {
            ans += temp * pow;
            break;
        }
        // Based on intution doing this operation... Read above for more details
        if (temp >= 5)
        {
            temp = 9 - temp;
        }
        ans += temp * pow;
        pow *= 10;
        y /= 10;
    }
    if (ans <= x)
    {
        cout << ans;
    }
    else
    {
        cout << x;
    }
}