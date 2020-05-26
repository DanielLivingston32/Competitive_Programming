// Selection sort implementation...
// Idea is to find minimum element in the array and swap it with the current element.. And then move on to the next idx and repeat the same process
// Time Complexity:

#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
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
    SelectionSort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}