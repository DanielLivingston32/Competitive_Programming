#include <bits/stdc++.h>
using namespace std;

void QuickSort(int arr[], int s, int e)
{
    // Base case:
    // If the array contains 1 or 0 elements it is already sorted.
    if (s >= e)
    {
        return;
    }

    // Follow these 3 steps.
    // First step was to find pivot and arrange element according to pivot in array.
    int p = pivot(arr, s, e);

    // Call the left and right part of pivot to be sorted by recursion
    QuickSort(arr, s, mid);
    QuickSort(arr, mid + 1, e);

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
    QuickSort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}