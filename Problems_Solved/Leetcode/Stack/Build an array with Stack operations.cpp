class Solution
{
public:
    vector<string> buildArray(vector<int> &target, int n)
    {
        vector<string> result;
        string push = "Push";
        string pop = "Pop";
        int i = 0, j = 1;
        while (j <= n and i < target.size())
        {
            if (j == target[i])
            {
                result.push_back(push);
                i++;
            }
            else
            {
                result.push_back(push);
                result.push_back(pop);
            }
            j++;
        }
        return result;
    }
};