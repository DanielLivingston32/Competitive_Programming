#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

// The naive approach has a complexity of O(N^2)
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

// From the naive approach if we note clearly both the left and right are repetitive and is calculated again and again increasing complexity
// So inorder to make this better we optimise this part to Decrease complexity to O(N) and space complexity O(N)
int EfficientApproach(int arr[], int n)
{
    int total = 0;
    int left[n];
    int right[n];
    left[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > left[i - 1])
        {
            left[i] = arr[i];
        }
        else
        {
            left[i] = left[i - 1];
        }
    }

    right[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > right[i + 1])
        {
            right[i] = arr[i];
        }
        else
        {
            right[i] = right[i + 1];
        }
    }

    for (int i = 0; i < n; i++)
    {
        total += min(left[i], right[i]) - arr[i];
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
    cout << EfficientApproach(arr, n);
}