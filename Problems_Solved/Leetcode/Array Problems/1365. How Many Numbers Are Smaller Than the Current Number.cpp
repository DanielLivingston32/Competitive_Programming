
// Time Complexity & Space Complexity: O(N)

class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        // Max frequency array
        vector<int> a(101, 0);
        // Modified prefix sum array
        vector<int> b(101);

        int n = nums.size();

        // Updating frequency of all the elements
        for (int i = 0; i < n; i++)
        {
            a[nums[i]]++;
        }

        // Prefix Sum of i will be how many elements are there before a[i].. That is the sum of previous prefix sum value(b[i-1]) and previous a value(a[i-1])
        for (int i = 1; i < 101; i++)
        {
            b[i] = a[i - 1] + b[i - 1];
        }

        // Answer array
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            ans[i] = b[nums[i]];
        }

        return ans;
    }
};