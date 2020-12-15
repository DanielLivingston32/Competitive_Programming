#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int stringToInt(char a[], int n)
{
    // Base case
    if (n == 0)
    {
        return 0;
    }
    // Recursive case
    int subproblem = stringToInt(a, n - 1);
    int digit = a[n - 1] - '0';
    subproblem = subproblem * 10 + digit;
    return subproblem;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cout << "Enter the no to be converted: ";
    char a[1000];
    cin.getline(a, 1000);
    cout << stringToInt(a, strlen(a));

    return 0;
}