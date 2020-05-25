//Linear Search implementation Time Complexity : O(N)

#include <bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[], int k, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            return i;
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
    int res = LinearSearch(arr, k, n - 1);
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