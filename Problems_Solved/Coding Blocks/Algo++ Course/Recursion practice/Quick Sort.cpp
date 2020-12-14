#include <bits/stdc++.h>

using namespace std;

void quickSort(long int arr[], int start, int end)
{
    // Base case
    if (start >= end)
    {
        return;
    }
    // Arrange element based on pivot.
    int p = end;
    int i = start - 1;
    for (int j = start; j < end; j++)
    {
        if (arr[j] < arr[p])
        {
            swap(arr[j], arr[i + 1]);
            i++;
        }
    }
    swap(arr[i + 1], arr[p]);
    // Recursively sort left and right part
    quickSort(arr, start, i);
    quickSort(arr, i + 2, end);
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

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}