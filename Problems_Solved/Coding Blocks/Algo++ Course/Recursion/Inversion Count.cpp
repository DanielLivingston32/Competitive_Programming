#include <bits/stdc++.h>

using namespace std;

int merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    int i = s;
    int j = mid + 1;
    int k = s;

    int temp[100000];

    int cnt = 0; // For cross inversion cnt

    while (i <= mid and j <= e)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            cnt += mid - (i - 1); // Same as mid - (i-1)
        }
    }
    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= e)
    {
        temp[k++] = arr[j++];
    }

    // Copy all elements to original array
    for (int i = s; i <= e; i++)
    {
        arr[i] = temp[i];
    }

    return cnt;
}

int inversion_cnt(int *arr, int s, int e)
{
    // Base case
    if (s >= e)
    {
        return 0;
    }
    // Find midpoint
    int mid = (s + e) / 2;

    // Recursive case
    int x = inversion_cnt(arr, s, mid);
    int y = inversion_cnt(arr, mid + 1, e);

    // Merging / Sorted trick
    int z = merge(arr, s, e); // Cross inversion count

    return x + y + z;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << inversion_cnt(arr, 0, n - 1) << endl;

    return 0;
}