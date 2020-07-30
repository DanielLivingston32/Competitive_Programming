// Time Complexity : O(N) & Space Complexity: O(1)
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int i = 1;
        if (nums.size() == 0)
        {
            return 0;
        }
        for (int j = i; j < nums.size(); j++)
        {
            if (nums[i - 1] != nums[j])
            {
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};  