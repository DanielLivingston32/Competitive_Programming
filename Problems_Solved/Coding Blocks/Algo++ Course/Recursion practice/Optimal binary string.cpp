#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

long int optimalBinaryString(int n)
{
    // Base case
    if (n <= 2)
    {
        return n;
    }
    // Recursive case
    return optimalBinaryString(n - 1) + optimalBinaryString(n - 2);
}

int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    cout << optimalBinaryString(n);

    return 0;
}