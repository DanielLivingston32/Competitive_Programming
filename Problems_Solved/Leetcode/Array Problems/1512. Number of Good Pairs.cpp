//Naive Solution
// Time Complexity: O(N^2):
class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};

//Time Complexity: O(N LogN):
class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int i = 0;
        int cnt = 0;
        for (int j = 1; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
            {
                cnt += j - i;
            }
            else
            {
                i = j;
            }
        }
        return cnt;
    }
};

// Time Complexity & Space Complexity: O(N)
class Solution
{
public:
    int numIdenticalPairs(vector<int> &nums)
    {
        int freq[101] = {0};
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            cnt += freq[nums[i]]++;
        }
        return cnt;
    }
};