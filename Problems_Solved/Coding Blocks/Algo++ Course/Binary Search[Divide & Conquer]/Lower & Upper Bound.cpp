#include <iostream>

using namespace std;

int lowerBound(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1, mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (key == arr[mid])
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int upperBound(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1, mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (key == arr[mid])
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return (ans == -1) ? -1 : ans + 1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int key;
        cin >> key;
        int lower_bound = lowerBound(arr, n, key);
        int upper_bound = upperBound(arr, n, key);
        if (lower_bound != -1)
        {
            cout << lower_bound << " " << upper_bound - 1 << endl;
        }
        else
        {
            cout << -1 << " " << -1 << endl;
        }
    }
}