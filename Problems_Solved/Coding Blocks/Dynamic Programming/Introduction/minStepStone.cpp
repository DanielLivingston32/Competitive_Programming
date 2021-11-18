#include <bits/stdc++.h>

using namespace std;

int topDownApproach(int n, int arr[])
{
    if (n == 1)
    {
        return arr[1];
    }
    // Lookup if n is present
    if (arr[n] != 0)
    {
        return arr[n];
    }
    // If n not already present
    arr[n] = min(min((n % 3 == 0 ? topDownApproach(n / 3, arr) : INT_MAX), ((n & 1) == 0 ? topDownApproach(n / 2, arr) : INT_MAX)), topDownApproach(n - 1, arr)) + 1;
    return arr[n];
}

int bottomUpApproach(int n)
{
    int arr[n + 1];
    arr[0] = -1;
    arr[1] = 0;
    if (n == 1 or n == 0)
    {
        return arr[n];
    }

    for (int i = 2; i <= n; i++)
    {
        arr[i] = min(min(i % 3 == 0 ? arr[i / 3] : INT_MAX, i % 2 == 0 ? arr[i / 2] : INT_MAX), arr[i - 1]) + 1;
    }
    return arr[n];
}

int main()
{

    int n;
    cin >> n;
    cout << bottomUpApproach(n);
}