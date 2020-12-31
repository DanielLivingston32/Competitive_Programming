// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

// compute reverse of a number
long long rev(long long n)
{
    long long rev_num = 0;
    while (n > 0)
    {
        rev_num = rev_num * 10 + n % 10;
        n = n / 10;
    }
    return rev_num;
}

long long power(int N, int R);

int main()
{
    int T;
    cin >> T; //testcases

    while (T--)
    {
        long long N;
        cin >> N; //input N

        long long R = 0;

        // reverse the given number n
        R = rev(N);

        //power of the number to it's reverse
        long long ans = power(N, R);
        cout << ans << endl;
    }
} // } Driver Code Ends

//You need to complete this fucntion

// Note you cannot do subproblem*subproblem*N for large numbers as the system memory cannot handle such large calculations and tend to overflow.
// After overflow even though if you use mod it won't affect the result as it has already been overflowed.
// So i seperately calculated subproblem*subproblem and then later with N.

long long power(int N, int R)
{
    // Base case
    if (R == 0)
    {
        return 1;
    }
    // Recursive case
    long long subproblem = power(N, R / 2) % mod;
    subproblem = (subproblem * subproblem) % mod;
    if (R % 2 == 0)
    {
        return subproblem;
    }
    return (subproblem * N) % mod;
}
