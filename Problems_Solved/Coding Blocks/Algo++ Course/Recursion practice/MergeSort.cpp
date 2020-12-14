#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

void merge(long int arr[], int start, int end)
{
    int mid = (start + end) / 2;
    int i = start;
    int j = mid + 1;
    vector<int> temp_arr;
    temp_arr.reserve(1000);
    while (i <= mid && j <= end)
    {
        if (arr[i] < arr[j])
        {
            temp_arr.push_back(arr[i]);
            i++;
        }
        else
        {
            temp_arr.push_back(arr[j]);
            j++;
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
}

void mergeSort(long int arr[], int start, int end)
{
    // base case
    if (start >= end)
    {
        return;
    }
    // Recursive case
    int mid = (start + end) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);

    // merge
    merge(arr, start, end);
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

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}