#include <iostream>
using namespace std;

int checkTimePossible(long int mid, long int arr[], int n)
{
    int res = 1, window = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] + window <= mid)
        {
            window += arr[i];
        }
        else
        {
            res++;
            window = arr[i];
        }
    }
    return res;
}
int main()
{
    int k;
    int n;
    cin >> k >> n;
    long int arr[n];
    long int start = 0, end = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        end += arr[i];
        start = max(start, arr[i]);
    }
    long int mid, ans = start;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (k >= checkTimePossible(mid, arr, n))
        {
            end = mid - 1;
            ans = mid;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << ans << endl;
    return 0;
}