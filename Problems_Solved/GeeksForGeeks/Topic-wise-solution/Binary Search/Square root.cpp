// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

long long int floorSqrt(long long int x);

// } Driver Code Ends

// Function to find square root
// x: element to find square root
long long int floorSqrt(long long int x)
{
    long long int start = 0, end = x, mid, ans;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (mid * mid <= x)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << floorSqrt(n) << endl;
    }
    return 0;
}
// } Driver Code Ends