#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

long int noStarMultiplication(int base, int n)
{
    if (n == 0)
    {
        return 0;
    }
    return base + noStarMultiplication(base, n - 1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cout << "Enter the base: ";
    int base;
    cin >> base;
    cout << "Enter the multiplicative no: ";
    int mul;
    cin >> mul;
    cout << noStarMultiplication(base, mul) << endl;
    return 0;
}