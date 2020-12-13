#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

long int friendsParing(int n)
{
    // Base case
    if (n <= 2)
    {
        return n;
    }
    // Recursive case
    return friendsParing(n - 1) + (n - 1) * friendsParing(n - 2);
}

int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    cout << friendsParing(n);

    return 0;
}