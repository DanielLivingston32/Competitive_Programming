// This approach is using Kadane's Algorithm...
// Time Complexity: O(N)
// This algorithm can be modified to suit solutions for other problems...

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[1000], cumsum[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //Kadane's Algorithm
    int max_sum = INT_MIN, current_sum = 0;
    for (int i = 0; i < n; i++)
    {
        current_sum += arr[i];
        max_sum = max(max_sum, current_sum);
        if (current_sum < 0)
        {
            current_sum = 0;
        }
    }
    cout << "Maximum sum is : " << max_sum << endl;
}