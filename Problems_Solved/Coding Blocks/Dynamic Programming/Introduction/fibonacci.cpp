#include <bits/stdc++.h>

using namespace std;

int fibonacci(int n)
{
    // Base case
    if (n == 0 or n == 1)
    {
        return n;
    }

    // Recursive case
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int fibonacci_dp(int n, int dp[])
{
    // Base case
    if (n == 0 or n == 1)
    {
        return n;
    }

    // Recursive case
    // Lookup
    if (dp[n] != 0)
    {
        return dp[n];
    }

    dp[n] = fibonacci(n - 1) + fibonacci(n - 2);

    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    int dp[n + 1] = {0};
    cout << "The nth Fibonacci no is: " << fibonacci_dp(n, dp);
}