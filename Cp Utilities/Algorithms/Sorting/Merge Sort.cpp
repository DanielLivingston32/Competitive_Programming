#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int s, int e)
{
    int mid = (s + e) / 2;
    int i = s;
    int j = mid + 1;
    int k = s;

    int temp[100];
    while (i <= mid && j <= e)
    {
        if (arr[i] < arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }

    while (j <= mid)
    {
        temp[k++] = arr[j++];
    }

    // Now copy all element to original array.
    for (int i = s; i <= e; i++)
    {
        arr[i] = temp[i];
    }
}

void MergeSort(int arr[], int s, int e)
{
    // Base case:
    // If the array contains 1 or 0 elements it is already sorted.
    if (s >= e)
    {
        return;
    }

    // Follow these 3 steps.
    // First step was to divide.
    int mid = (s + e) / 2;

    // Call the divided part recursively and assume they are already sorted.
    MergeSort(arr, s, mid);
    MergeSort(arr, mid + 1, e);

    // Merge the arrays
    merge(arr, s, e);
}

int main()
{
    int n, a[1000];
    cout << "Enter no of elements in array: ";
    cin >> n;
    cout << endl
         << "Enter array elements to sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << endl;
    MergeSort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
