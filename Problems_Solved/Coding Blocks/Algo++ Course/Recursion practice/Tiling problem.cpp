#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

long int tiling(int n)
{
    // Base case
    if (n <= 3)
    {
        return 1;
    }
    // Recursive case
    return tiling(n - 1) + tiling(n - 4);
}

int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    cout << tiling(n);

    return 0;
}