#include <iostream>

using namespace std;

int searchInRotatedArray(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[start] <= arr[mid])
        {
            if (arr[start] <= key && arr[mid] >= key)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (arr[mid] <= key && arr[end] >= key)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
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
    cout<<searchInRotatedArray(arr,n,key);
}