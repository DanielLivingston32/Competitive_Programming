#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll binaryExponentation(ll base, ll expo)
{
    if (expo == 1)
    {
        return base;
    }
    ll subproblems = binaryExponentation(base, expo / 2);
    if (expo & 1)
    {
        return base * subproblems * subproblems;
    }
    else
    {
        return subproblems * subproblems;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll base, expo;
    cout << "Enter Base and Exponent" << endl;
    cin >> base >> expo;
    cout << binaryExponentation(base, expo);
    return 0;
}