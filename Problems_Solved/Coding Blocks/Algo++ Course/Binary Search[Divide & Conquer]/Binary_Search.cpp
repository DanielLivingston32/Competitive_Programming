// Time Complexity: O(Log n)
#include <iostream>

using namespace std;

long int binarySearch(int a[], long int n, int key)
{
    long int start = 0;
    long int end = n - 1;
    long int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] > key)
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
    long int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    cout << binarySearch(arr, n, key);
}