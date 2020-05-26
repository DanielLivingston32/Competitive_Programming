// Using Cumulative Sum (Prefix Sum) Approach
// Time Complexity: O(N^2)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[1000], cumsum[1000];
    cin >> arr[0];
    cumsum[0] = arr[0];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cumsum[i] = cumsum[i - 1] + arr[i];
    }
    int max_sum = INT_MIN, current_sum;
    int left, right;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if (i != 0)
            {
                current_sum = cumsum[j] - cumsum[i - 1];
            }
            else
            {
                current_sum = cumsum[j];
            }

            if (current_sum > max_sum)
            {
                max_sum = current_sum;
                left = i;
                right = j;
            }
        }
    }
    cout << "Maximum sum is : " << max_sum << endl;
    cout << "The elements are as follow:" << endl;
    for (int i = left; i <= right; i++)
    {
        cout << arr[i] << ", ";
    }
}