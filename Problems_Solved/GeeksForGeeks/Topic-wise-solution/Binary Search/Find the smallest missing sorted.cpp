#include <iostream>
using namespace std;

bool binary_search(int arr[], int n, int key)
{
    int start = 0, end = n - 1, mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return 0;
}

int findFirstMissing(int array[],
                     int start, int end)
{
    if (start > end)
        return end + 1;

    if (start != array[start])
        return start;

    int mid = (start + end) / 2;

    // Left half has all elements
    // from 0 to mid
    if (array[mid] == mid)
        return findFirstMissing(array,
                                mid + 1, end);

    return findFirstMissing(array, start, mid);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        // for (int i = 0; i < m; i++)
        // {
        //     if (!(binary_search(arr, n, i)))
        //     {
        //         cout << i << endl;
        //         break;
        //     }
        // }

        // Alternative Efficient approach
        cout << findFirstMissing(arr, 0, n - 1);
    }
    return 0;
}