//Binary Search implementation Time Complexity : O(log(N))

#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int k, int n)
{
    int s = 0, e = n;
    while (s <= e)
    {

        int mid = (s + e) / 2;

        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] < k)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    // If element is not found the function returns -1
    return -1;
}

int main()
{
    int arr[] = {9, 3, 5, 2, 4, 2, 1, 6, 6};
    int k;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Enter no to search in array" << endl;
    cin >> k;
    int res = BinarySearch(arr, k, n - 1);
    if (res == -1)
    {
        cout << endl
             << "Element not found";
    }
    else
    {
        cout << endl
             << "Element is found in position " << res;
    }
}