#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

long int ladders(int n)
{
    // Base case
    if (n == 0)
    {
        return 1;
    }
    if (n <= 2)
    {
        return n;
    }
    // Recursive case
    return ladders(n - 1) + ladders(n - 2) + ladders(n - 3);
}

int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    cout << ladders(n);

    return 0;
}