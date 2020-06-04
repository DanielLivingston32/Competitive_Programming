// Used the below approach
/*
Solution
Let us consider the array {12, 4, 78, 90, 45, 23} to understand the soultion.
1) Construct an auxiliary array inc[] from left to right such that inc[i] contains length of the nondecreaing subarray ending at arr[i].
For A[] = {12, 4, 78, 90, 45, 23}, inc[] is {1, 1, 2, 3, 1, 1}

2) Construct another array dec[] from right to left such that dec[i] contains length of nonincreasing subarray starting at arr[i].
For A[] = {12, 4, 78, 90, 45, 23}, dec[] is {2, 1, 1, 3, 2, 1}.

3) Once we have the inc[] and dec[] arrays, all we need to do is find the maximum value of (inc[i] + dec[i] – 1).
For {12, 4, 78, 90, 45, 23}, the max value of (inc[i] + dec[i] – 1) is 5 for i = 3.

*/
// Time complexity: O(t*N)

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> arr;
        long int n;
        cin >> n;
        int input;
        for (int i = 0; i < n; i++)
        {
            cin >> input;
            arr.push_back(input);
        }
        int increase_arr[n];
        int decrease_arr[n];
        increase_arr[0] = 1;
        decrease_arr[n - 1] = 1;
        for (int i = 1; i < n; i++)
        {
            increase_arr[i] = (arr[i] >= arr[i - 1]) ? increase_arr[i - 1] + 1 : 1;
            decrease_arr[n - i - 1] = (arr[n - i - 1] >= arr[n - i]) ? decrease_arr[n - i] + 1 : 1;
        }
        int max_length = 1;
        for (int i = 0; i < n; i++)
        {
            max_length = max(max_length, increase_arr[i] + decrease_arr[i] - 1);
        }
        cout << max_length << endl;
    }
}