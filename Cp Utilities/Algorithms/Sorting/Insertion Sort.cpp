// Insertion sort implementation...
// Idea is to find minimum element in the array and swap it with the current element.. And then move on to the next idx and repeat the same process
// Time Complexity:

#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        int j = i - 1, e = arr[i];
        while (j >= 0 and arr[j] > e)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = e;
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
    InsertionSort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}