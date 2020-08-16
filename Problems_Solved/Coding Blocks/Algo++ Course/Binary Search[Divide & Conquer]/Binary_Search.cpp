#include <iostream>

using namespace std;

int binarySearch(int a[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (mid == key)
        {
            return mid;
        }
        else if (mid > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    cout << (binarySearch(arr, n, key) == -1 ? "Element not Found" : "Element found");
}