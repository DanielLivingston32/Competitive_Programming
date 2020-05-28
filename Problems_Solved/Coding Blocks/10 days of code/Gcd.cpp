#include <iostream>
using namespace std;

long long gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}

int main()
{
    long long a, b;
    cin >> a >> b;
    long long ans = (a > b) ? gcd(a, b) : gcd(b, a);
    cout << ans;
    return 0;
}