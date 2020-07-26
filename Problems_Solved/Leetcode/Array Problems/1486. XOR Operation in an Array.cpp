// TIme Complexity: O(N)
// Space Complexity: O(1)
class Solution
{
public:
    int xorOperation(int n, int start)
    {
        int ans = start;
        for (int i = 1; i < n; i++)
        {
            ans ^= start + 2 * i;
        }
        return ans;
    }
};