// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    void subSum(vector<int> &ans, vector<int> &arr, int i, int N, int sum)
    {
        // Base case
        if (i == N)
        {
            ans.push_back(sum);
            return;
        }
        // Recursive part
        // Include i
        subSum(ans, arr, i + 1, N, sum + arr[i]);
        // No Include i
        subSum(ans, arr, i + 1, N, sum);
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> ans;
        subSum(ans, arr, 0, N, 0);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr, N);
        for (auto sum : ans)
        {
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
} // } Driver Code Ends