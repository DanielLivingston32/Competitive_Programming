#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

long long recursiveBinPow(int base, int power)
{
    // Base case
    if (power == 0)
    {
        return 1;
    }
    if (power == 1)
    {
        return base;
    }
    // Recursive case
    long long subproblem = recursiveBinPow(base, power / 2);
    if (power % 2)
    {
        return base * subproblem * subproblem;
    }
    return subproblem * subproblem;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cout << "Enter the base: ";
    int base;
    cin >> base;
    cout << "Enter the power: ";
    int power;
    cin >> power;
    cout << recursiveBinPow(base, power) << endl;

    return 0;
}