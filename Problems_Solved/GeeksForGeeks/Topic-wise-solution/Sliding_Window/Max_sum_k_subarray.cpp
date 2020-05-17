/* Given an array of integers and a number K. Write a program to find the maximum sum of a subarray of size K.

Input:
First line of input contains a single integer T which denotes the number of test cases. Then T test cases follows. First line of each test case contains two space separated integers N and K where N denotes the number of elements. Second line of each test case contains N space separated integers which denotes the elements of the array.
Output:
For each test case print the maximum sum of a subarray of size K.

Constraints:
1<=T<=100
1<=N<=105
1<=K<=N

Example:
Input:
2
4 2
100 200 300 400
9 4
1 4 2 10 23 3 1 0 20
Output:
700
39  */

// My approach was to use a sliding window were the sum of the first k elements is calculated and max is set to this value..
// Then we need iterate through the remaining elements from  position k+1 element.. As you move the sliding window you need to add the new element
// to the sum and subtract the previous element with goes away from the window. This will give the current window sum..
// Update max if this value is greater than max... Do this until the window reaches the last element... Finally print the value stored in max...

// My Code

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int cnt = 0, sum = 0, max = 0, temp, arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            arr[i] = temp;
            if (cnt < k)
            {
                sum += temp;
                cnt++;
            }
        }
        max = sum;

        for (int i = cnt; i < n; i++)
        {
            sum = sum - arr[i - k] + arr[i];
            if (sum > max)
            {
                max = sum;
            }
        }
        cout << max << endl;
    }
    return 0;
}