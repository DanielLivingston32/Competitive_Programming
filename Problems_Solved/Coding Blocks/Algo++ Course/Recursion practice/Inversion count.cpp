#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int merge(long int arr[], int start, int end)
{
    int mid = (start + end) / 2;
    int i = start;
    int j = mid + 1;
    int count = 0;
    vector<int> temp_arr;
    temp_arr.reserve(1000);

    while (i <= mid && j <= end)
    {
        if (arr[i] > arr[j])
        {
            count += (mid - i + 1);
            temp_arr.push_back(arr[j]);
            j++;
        }
        else
        {
            temp_arr.push_back(arr[i]);
            i++;
        }
    }

    while (i <= mid)
    {
        temp_arr.push_back(arr[i]);
        i++;
    }

    while (j <= end)
    {
        temp_arr.push_back(arr[j]);
        j++;
    }

    // Now copy it back to the array.
    i = start;
    for (auto k : temp_arr)
    {
        arr[i] = k;
        i++;
    }
    return count;
}

int inversionCount(long int arr[], int start, int end)
{
    // Base case
    if (start >= end)
    {
        return 0;
    }
    // Recursive
    int mid = (start + end) / 2;
    int x = inversionCount(arr, start, mid);
    int y = inversionCount(arr, mid + 1, end);
    int z = merge(arr, start, end);
    return x + y + z;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cout << "Enter array size: ";
    int n;
    cin >> n;
    cout << "Enter array elements: ";
    long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << inversionCount(arr, 0, n - 1) << endl;

    return 0;
}