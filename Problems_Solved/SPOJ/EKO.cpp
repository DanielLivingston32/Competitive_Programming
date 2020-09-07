// Time complexity: O(N Log N) -- Binary Search
#include <iostream>
#include <climits>

using namespace std;

bool checkWoodEnough(long int arr[], long int mid, long int n, long int m)
{
    long int res = 0;
    for (long int i = 0; i < n; i++)
    {
        if (mid < arr[i])
        {
            res += arr[i] - mid;
        }
    }
    if (res >= m)
    {
        return 1;
    }
    return 0;
}

int main()
{
    long int n, m;
    cin >> n >> m;
    long int arr[n], end = INT_MIN, start = INT_MAX;
    for (long int i = 0; i < n; i++)
    {
        cin >> arr[i];
        start = min(start, arr[i]);
        end = max(end, arr[i]);
    }
    long int mid, ans = -1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (checkWoodEnough(arr, mid, n, m))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << ans << endl;
    ;
}