#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

int firstOccurence(int arr[], int n, int key)
{
    // Base case
    if (n == 0)
    {
        return -1;
    }
    if (arr[0] == key)
    {
        return 0;
    }
    // Recursive case
    int subproblem = firstOccurence(arr + 1, n - 1, key);
    if (subproblem != -1)
    {
        return subproblem + 1;
    }
    return -1;
}

int lastOccurences(int arr[], int n, int key)
{
    // Base case
    if (n == 0)
    {
        return -1;
    }
    // Recursive case
    int subproblem = lastOccurences(arr + 1, n - 1, key);
    if (subproblem != -1)
    {
        return subproblem + 1;
    }
    if (arr[0] == key)
    {
        return 0;
    }
    return -1;
}

void allOccurences(int arr[], int i, int n, int key)
{
    // Base case
    if (i == n)
    {
        return;
    }
    if (arr[i] == key)
    {
        cout << i << " ";
    }
    // Recursive case
    allOccurences(arr, i + 1, n, key);
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cout << "Size: ";
    int n;
    cin >> n;
    cout << "Enter elements: ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter Key: ";
    int key;
    cin >> key;
    cout << "First Occurence: " << firstOccurence(arr, n, key) << endl;
    cout << "Last Occurence: " << lastOccurences(arr, n, key) << endl;
    cout << "All Occurences: ";
    allOccurences(arr, 0, n, key);
    cout << endl;
    return 0;
}