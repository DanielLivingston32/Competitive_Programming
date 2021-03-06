class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        map<int, int> hashmap;
        stack<int> calc;
        int i = 0;
        while (i < nums2.size())
        {
            if (calc.empty() or nums2[i] < calc.top())
            {
                calc.push(nums2[i++]);
            }
            else
            {
                hashmap[calc.top()] = nums2[i];
                calc.pop();
            }
        }
        vector<int> ans;
        for (auto x : nums1)
        {
            if (hashmap[x])
            {
                ans.push_back(hashmap[x]);
            }
            else
            {
                ans.push_back(-1);
            }
        }
        return ans;
    }
};