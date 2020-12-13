#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

void bubbleSortRecursion(long int arr[], int i, int j, int n)
{
    // base case
    if (i == n)
    {
        return;
    }
    if (j == n - i - 1)
    {
        bubbleSortRecursion(arr, i + 1, 0, n);
        return;
    }
    // Swap part - 2nd loop
    if (arr[j] > arr[j + 1])
    {
        swap(arr[j], arr[j + 1]);
    }
    bubbleSortRecursion(arr, i, j + 1, n);
    return;
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

    bubbleSortRecursion(arr, 0, 0, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}