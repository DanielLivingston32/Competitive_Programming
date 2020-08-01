class Solution
{
public:
    int noOfDigits(int n)
    {
        string no = to_string(n);
        return no.size();
    }

    // Use of any of the two methods
    int noOfDigits2(int n)
    {
        int cnt = 0;
        while (n)
        {
            n /= 10;
            cnt++;
        }
        return cnt;
    }

    int findNumbers(vector<int> &nums)
    {
        int even_digits = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (noOfDigits(nums[i]) % 2 == 0)
            {
                even_digits++;
            }
        }
        return even_digits;
    }
};