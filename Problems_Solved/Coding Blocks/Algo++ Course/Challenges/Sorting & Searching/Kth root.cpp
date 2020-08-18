// Implementation using binary search concept
// Time complexity : O(Log N)

#include <iostream>
#include <cmath>

using namespace std;

long long findGreatestRoot(long long n, int k)
{
    long long start = 1, end = n;
    long long ans = -1, mid, temp;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (pow(mid, k) <= n)
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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        int k;
        cin >> n >> k;
        cout << findGreatestRoot(n, k) << endl;
    }
}