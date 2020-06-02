#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int NaiveApproach(int arr[], int n)
{
    int total = 0;
    for (int i = 1; i < n; i++)
    {
        int left = arr[i];
        for (int j = i - 1; j >= 0; j--)
        {
            left = max(left, arr[j]);
        }
        int right = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            right = max(right, arr[j]);
        }
        total += (min(left, right) - arr[i]);
    }
    return total;
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
    cout << NaiveApproach(arr, n);
}