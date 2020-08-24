#include <iostream>

using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    long long calc = a ^ b;
    long long ans = 0;
    while (calc)
    {
        ans = ans << 1;
        ans = ans | 1;
        calc = calc >> 1;
    }
    cout << ans;
    return 0;
}
