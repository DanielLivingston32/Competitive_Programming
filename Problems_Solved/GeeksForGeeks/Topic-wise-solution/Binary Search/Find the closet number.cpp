#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, key;
        cin >> n >> key;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int start = 0, end = n - 1, ans = 0, mid;
        while (start <= end)
        {
            mid = (start + end) / 2;
            if (arr[mid] <= key)
            {
                start = mid + 1;
                ans = mid;
            }
            else
            {
                end = mid - 1;
            }
        }
        if (key - arr[ans] >= arr[ans + 1] - key)
        {
            cout << arr[ans + 1];
        }
        else
        {
            cout << arr[ans];
        }
        cout << endl;
    }
    return 0;
}