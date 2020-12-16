#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int recursiveBinarySearch(long int arr[], int start, int end, long int key)
{
    // Base cases
    if (start > end)
    {
        return -1;
    }
    int mid = (start + end) / 2;
    if (arr[mid] == key)
    {
        return mid;
    }
    // Recursive cases
    if (arr[mid] < key)
    {
        return recursiveBinarySearch(arr, mid + 1, end, key);
    }
    return recursiveBinarySearch(arr, start, mid - 1, key);
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
    cout << "Enter key: ";
    long int key;
    cin >> key;
    int index = recursiveBinarySearch(arr, 0, n, key);
    cout << (index == -1 ? "The key is not found in the array" : "The key is found at index " + to_string(index)) << endl;

    return 0;
}