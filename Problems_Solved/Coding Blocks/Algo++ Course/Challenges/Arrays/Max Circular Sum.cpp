
// Implemented Kadane's Algorithm here.. The intution behind this approach is explained below...
// Time Complexity: O(N)    Space Complexity: O(1)

/* In case of a circular array, we may have two cases:
1.The max subarray is not wrapped

2. The max subarray is wrapped.

So the max subarray circular sum equals to max(the max subarray sum, the total sum - the min subarray sum)

We need to find the max subarray in circular ring. This means we need to eliminate minimum sum sequence from the main sequence.
Suppose our given array is {2, 5, 8, -5, -2, -6, 7, 3}.
Now we need to find the max sum subarray. We will first find out the min sum sequence. 
It will be {-5, -2, -6}. If we find the total sum of input array, and add this min sum to it then we get the max sum.

Total sum = 2+5+8+(-5)+(-2)+(-6)+7+3 = 12
Min sum sequence = (-5)+(-2)+(-6) = -13
Max sum sequence = Total sum-Min sum sequence = 25
We can easily verify this: 2+5+8+7+3 = 25

*/
#include <iostream>
#include <climits>

using namespace std;

int KadanesAlgoModified(int arr[], int n)
{
    int max_ending_here = 0;
    int max_so_far = INT_MIN;
    int min_ending_here = 0;
    int min_so_far = INT_MAX;
    int i = 0;
    int total_sum = 0;
    while (i < n)
    {
        max_ending_here += arr[i];
        max_so_far = max(max_so_far, max_ending_here);
        min_ending_here += arr[i];
        min_so_far = min(min_so_far, min_ending_here);
        if (max_ending_here < 0)
        {
            max_ending_here = 0;
        }
        if (min_ending_here > 0)
        {
            min_ending_here = 0;
        }
        total_sum += arr[i];
        i++;
    }
    if (max_so_far >= 0)
    {
        return max(max_so_far, total_sum - min_so_far);
    }
    return max_so_far;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << KadanesAlgoModified(arr, n) << endl;
    }
}