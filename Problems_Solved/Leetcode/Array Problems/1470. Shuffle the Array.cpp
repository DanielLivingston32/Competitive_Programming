// Time Complexity & Space Complexity: O(N)
class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> arr;
        arr.reserve(nums.size());
        for (int i = 0; i < nums.size(); i++)
        {
            if (i % 2 == 0)
            {
                arr.push_back(nums[i / 2]);
            }
            else
            {
                arr.push_back(nums[n + i / 2]);
            }
        }
        return arr;
    }
};