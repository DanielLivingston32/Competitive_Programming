// Bubble sort implementation...
// Time Complexity:

#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[], int n)
{
    for (int itr = 1; itr <= n - 1; itr++)
    {
        for (int j = 0; j <= n - itr - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
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
    BubbleSort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}