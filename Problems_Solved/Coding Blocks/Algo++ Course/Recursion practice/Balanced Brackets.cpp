#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

void balancedBrackets(char arr[], int n, int j, int open, int close)
{
    // Base case
    if (open == n && close == n)
    {
        arr[j] = '\n';
        cout << arr << endl;
        return;
    }
    // Place open
    if (open < n)
    {
        arr[j] = '(';
        balancedBrackets(arr, n, j + 1, open + 1, close);
    }
    // Place close
    if (close < open)
    {
        arr[j] = ')';
        balancedBrackets(arr, n, j + 1, open, close + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    char arr[1000];
    balancedBrackets(arr, n, 0, 0, 0);

    return 0;
}